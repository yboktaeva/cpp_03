/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:08:53 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/09 15:28:12 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) {

    DiamondTrap trap1("Player#1");
    DiamondTrap trap2("Player#2");
    //DiamondTrap trap3(trap1);
    
    trap1.whoAmI();
    trap2.attack(trap1.getName());
    trap1.takeDamage(1);
    //trap3.beRepaired(1);
    
    return 0;
} 