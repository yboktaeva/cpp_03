/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:23:30 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/09 14:51:09 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {

    ClapTrap trap1("Player#1");
    ClapTrap trap2(trap1);
    trap1 = trap2;
    ClapTrap trap3("Player#3");

    trap1.attack(trap3.getName());
    trap3.takeDamage(1);
    trap1.beRepaired(1);
    trap3.takeDamage(10);
    trap3.attack(trap2.getName());
    
    return 0;
}