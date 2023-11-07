/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:23:04 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/07 17:50:31 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
    
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &p) {

    std::cout << "Copy constructor called" << std::endl;
    _name = p.getName();
    _hitPoints = p._hitPoints;
    _energyPoints = p._energyPoints;
    _attackDamage = p._attackDamage;
    
}

ClapTrap& ClapTrap::operator=(ClapTrap const &p) {

    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &p)
        return *this;
    this->_name = p.getName();
    this->_hitPoints = p._hitPoints;
    this->_energyPoints = p._energyPoints;
    this->_attackDamage = p._attackDamage;

    return *this;
}

std::string ClapTrap::getName(void) const {
    
    return this->_name;
}

void ClapTrap::attack(const std::string& target) {

    if (this->_energyPoints == 0 || this->_hitPoints == 0)
        std::cout << "ClapTrap " << this->_name << "cannot attack" << std::endl;
    this->_energyPoints--;
    std::cout << "ClapTrap " << this->_name << "attacks " << target << ", causing " <<  this->_attackDamage << "points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {

    
}

void ClapTrap::beRepaired(unsigned int amount) {

    this->_energyPoints--;
}