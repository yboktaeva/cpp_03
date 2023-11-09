/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:21:39 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/09 17:28:48 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

protected:
    static const int _hP = 100;
    static const int _eP = 50;
    static const int _aD = 20;
    
public:
    ScavTrap();
    ScavTrap(const std::string& name);
    virtual ~ScavTrap();
    
    ScavTrap(ScavTrap const& src);
    ScavTrap& operator=(ScavTrap const& rhs);

    void attack(const std::string& target);
    void guardGate();
};

#endif