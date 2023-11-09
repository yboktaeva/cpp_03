/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:03:19 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/09 17:30:36 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {

    this->_hitPoints = FragTrap::_hP;
    this->_energyPoints = ScavTrap::_eP;
    this->_attackDamage = FragTrap::_aD;
    std::cout << "Default constructor called for " 
        << "DiamondTrap " << _name << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
    
    this->_name = name;
    this->_hitPoints = FragTrap::_hP; 
    this->_energyPoints = ScavTrap::_eP;
    this->_attackDamage = FragTrap::_aD;
    
    std::cout << "DiamondTrap " << _name 
        << " is constructed via default constructor" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    
    std::cout << "DiamondTrap " << _name << " is destructed" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src): ClapTrap(src), ScavTrap(src), FragTrap(src)  {

    _name = src._name;
    _name += "_copy";
    _hitPoints = src._hitPoints;
    _energyPoints = src._energyPoints;
    _attackDamage = src._attackDamage;
    std::cout << "DiamondTrap " << _name 
        << " is constructed via Copy constructor from " << src._name << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const &rhs) {

    if (this == &rhs)
        return *this;
    
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    std::cout << "DiamondTrap: assignment operator called" << std::endl;

    return *this;
}

void DiamondTrap::attack(const std::string& target) {

    ScavTrap::attack(target);
}
    
void DiamondTrap::whoAmI(void) {

    std::cout << "I'm " << "DiamondTrap " << _name 
        << ". My ClapTrap name is " << ClapTrap::_name << std::endl;
}