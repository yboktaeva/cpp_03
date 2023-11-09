/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:24:45 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/09 17:27:48 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    
    std::cout << "Default constructor called for " << "FragTrap " << _name << std::endl;
}

FragTrap::FragTrap(const std::string& name): ClapTrap(name) {
    
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;

    std::cout << "FragTrap " << _name << " is constructed via default constructor" << std::endl;
}

FragTrap::~FragTrap() {
    
    std::cout << "FragTrap " << _name << " is destructed" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src): ClapTrap(src) {

    _name = src._name;
    _name += "_copy";
    _hitPoints = src._hitPoints;
    _energyPoints = src._energyPoints;
    _attackDamage = src._attackDamage;
    
    std::cout << "FragTrap " << _name << " is constructed via Copy constructor from " << src._name << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const &rhs) {

    if (this == &rhs)
        return *this;
    
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    
    std::cout << "FragTrap: assignment operator called" << std::endl;

    return *this;
}

void FragTrap::highFivesGuys(void) {

    std::cout << "FragTrap " << _name << ": Give me five!" << std::endl;
}