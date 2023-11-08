/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:21:39 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/08 19:00:52 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

private:
    ScavTrap();
    std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;

public:
    ScavTrap(const std::string& name);
    virtual ~ScavTrap();
    
    ScavTrap(ScavTrap const& src);
    ScavTrap& operator=(ScavTrap const& rhs);

    void guardGate();
    void attack(const std::string& target);
};

#endif