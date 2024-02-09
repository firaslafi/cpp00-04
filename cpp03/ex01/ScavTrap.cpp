/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 10:31:23 by flafi             #+#    #+#             */
/*   Updated: 2024/02/09 12:41:24 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./ScavTrap.hpp"

ScavTrap::ScavTrap(void):ClapTrap()
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    cout << "Default ScavTrap constructor is called." << std::endl;
}
ScavTrap::ScavTrap(string name):ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    cout << "Main ScavTrap constructor is called " << this->_name << " got created." << std::endl;
}
ScavTrap::~ScavTrap(void) 
{
    std::cout << "ScavTrap destructor called for " << this->_name << "." << std::endl;
}
