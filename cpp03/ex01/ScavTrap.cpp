/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 10:31:23 by flafi             #+#    #+#             */
/*   Updated: 2024/02/10 08:19:16 by flafi            ###   ########.fr       */
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
void ScavTrap::attack(const std::string &target)
{
    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        cout << "ScavTrap " << this->_name << " attacks " 
            << target << " causing " << RED << this->_attackDamage << RESET
            << " points of damage!" << std::endl;
        this->_energyPoints--;
        cout << this->_energyPoints << " energy points left." << std::endl;
    }
    else if (this->_hitPoints <= 0)
    {
        cout << "ScavTrap " << " is dead and can't be attacked!!!" << std::endl;
    }
    else
    {
        cout << "ScavTrap " << BLUE << this->_name << RESET << "is out of energy points, needs to rest"
            << std::endl;
    }
}