/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:24:32 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/08 19:04:07 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {

    ScavTrap trap1("Player1");
    ScavTrap trap2(trap1);
    trap1 = trap2;
    ScavTrap trap3("Player3");

    trap1.attack("Player3");
    trap3.takeDamage(1);
    trap1.beRepaired(1);
    for (int i = 0; i < 11; i++)
        trap2.attack("Player1");

    trap2.beRepaired(10);
    trap3.takeDamage(10);
    trap3.attack("Player1");
    trap1.guardGate();
    
    return 0;
}