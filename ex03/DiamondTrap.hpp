/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:04:00 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/09 16:19:05 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

private:
    std::string _name;

public:
    DiamondTrap();
    DiamondTrap(const std::string& name);
    ~DiamondTrap();
    
    DiamondTrap(DiamondTrap const& src);
    DiamondTrap& operator=(DiamondTrap const& rhs);

    void attack(const std::string& target);
    void whoAmI(void);
};

#endif
