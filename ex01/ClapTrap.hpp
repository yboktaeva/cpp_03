/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:19:45 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/08 18:35:41 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {

private:
    ClapTrap();
    std::string _name;
protected:
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;

public:
    ClapTrap(const std::string& name);
    virtual ~ClapTrap();
    
    ClapTrap(ClapTrap const& src);
    ClapTrap& operator=(ClapTrap const& rhs);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif