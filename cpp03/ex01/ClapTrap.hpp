/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 21:38:59 by flafi             #+#    #+#             */
/*   Updated: 2024/02/10 08:16:50 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#define RED     "\033[31m"      /* Red */
#define RESET   "\033[0m"
#define BLUE    "\033[34m"      /* Blue */

using std::string;
using std::cout;

class ClapTrap
{
    public:

    ClapTrap(void);
    ClapTrap(string name);
    // copy constructor
    ClapTrap(const ClapTrap &source);
    // copy assignment operator
    ClapTrap& operator=(const ClapTrap &source);
    ~ClapTrap(void);
    
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    
    protected:
    string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;
};

#endif