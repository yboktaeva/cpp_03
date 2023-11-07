/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:19:45 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/07 17:37:59 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {

private:
    std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;

public:
    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap(ClapTrap const& p);
    ClapTrap& operator=(ClapTrap const& p);

    std::string getName(void) const;
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif