/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:24:32 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/09 14:51:23 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {

    ScavTrap trap1("Player#1");
    ScavTrap trap2(trap1);
    trap1 = trap2;
    ScavTrap trap3("Player#3");
    ScavTrap();
    
    trap1.attack(trap3.getName());
    trap3.takeDamage(1);
    trap1.beRepaired(1);
    for (int i = 0; i < 5; i++)
        trap2.attack(trap1.getName());

    trap2.beRepaired(10);
    trap3.takeDamage(10);
    trap3.attack(trap1.getName());
    trap1.guardGate();

    return 0;
}