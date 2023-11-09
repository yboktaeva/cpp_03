/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:23:56 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/09 15:09:41 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {

    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "Default constructor called for " << "ScavTrap " << _name << std::endl;
}

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name) {
    
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap " << _name << " is constructed via default constructor" << std::endl;
}

ScavTrap::~ScavTrap() {
    
    std::cout << "ScavTrap " << _name << " is destructed" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src): ClapTrap(src) {

    _name = src._name;
    _name += "_copy";
    _hitPoints = src._hitPoints;
    _energyPoints = src._energyPoints;
    _attackDamage = src._attackDamage;
    std::cout << "ScavTrap " << _name << " is constructed via Copy constructor from " << src._name << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &rhs) {

    if (this == &rhs)
        return *this;
    
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    std::cout << "ScavTrap: assignment operator called" << std::endl;

    return *this;
}

void ScavTrap::attack(const std::string& target) {

    if (_hitPoints <= 0) {
        
        std::cout << "ScavTrap " <<_name << " cannot attack " << target << " because he is dead" << std::endl;
        return ;
    }
    if (_energyPoints < 1)
        std::cout << "ScavTrap " << _name << " has no Energy Points to attack " << target << std::endl;
    else {
        
        _energyPoints--;
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    }
}

void ScavTrap::guardGate() {

    std::cout << "ScavTrap " << _name << " is in Gate keeper mode now" << std::endl;
}