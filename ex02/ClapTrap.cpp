/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:23:04 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/09 16:41:55 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    
    _name = "no_name";
    std::cout << "Default constructor called for " << "ClapTrap " << _name << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(10),
	_energyPoints(10), _attackDamage(0) {

	std::cout << "ClapTrap " << _name << " is constructed via default constructor" << std::endl;
}

ClapTrap::~ClapTrap() {

	std::cout << "ClapTrap " << _name << " is destructed" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) {

	_name = src._name;
	_name += "_copy";
	_hitPoints = src._hitPoints;
	_energyPoints = src._energyPoints;
	_attackDamage = src._attackDamage;
	std::cout << "ClapTrap " << _name << " is constructed via Copy constructor from " << src._name << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs) {

	std::cout << "ClapTrap: assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

std::string ClapTrap::getName() const {

    return this->_name;    
}

void ClapTrap::attack(const std::string &target) {

	if (_hitPoints <= 0) {
		
		std::cout << "ClapTrap " << _name << " cannot attack " << target << " because he is dead" << std::endl;
		return ;
	}
	if (_energyPoints < 1)
		std::cout << "ClapTrap " << _name << " has no Energy Points to attack " << target << std::endl;
	else {
	
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {

	if (_hitPoints <= 0) {
		
		std::cout << "ClapTrap " << _name << " cannot take Damage because he is already dead" << std::endl;
		return ;
	}
	else {
		
		_hitPoints -= amount;
		std::cout << "ClapTrap " << _name << " takes Damage of " << amount << ". Hit points " << _hitPoints << " now " << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {

	if (_hitPoints <= 0) {
		
		std::cout << "ClapTrap " << _name << " cannot be repaired because he is already dead" << std::endl;
		return ;
	}
	if (_energyPoints < 1)
		std::cout << "ClapTrap " << _name << " has no Energy Points to be repaired" << std::endl;
	else {
		
		_energyPoints--;
		_hitPoints += amount;
		std::cout << "ClapTrap " << _name << " has been repaired of " << amount << ". Hit points " << _hitPoints << " now" << std::endl;
	}
}