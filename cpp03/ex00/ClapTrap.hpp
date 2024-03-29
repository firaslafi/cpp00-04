/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 21:38:59 by flafi             #+#    #+#             */
/*   Updated: 2024/02/11 12:31:24 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

using std::string;

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
    
    private:
    string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDammage;
};

#endif