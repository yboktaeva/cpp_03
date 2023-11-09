/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:22:27 by yuboktae          #+#    #+#             */
/*   Updated: 2023/11/09 17:28:08 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
    
protected:
    static const int _hP = 100;
    static const int _eP = 100;
    static const int _aD = 30;
    
public:
    FragTrap();
    FragTrap(const std::string& name);
    virtual ~FragTrap();
    
    FragTrap(FragTrap const& src);
    FragTrap& operator=(FragTrap const& rhs);

    void highFivesGuys(void);
};

#endif