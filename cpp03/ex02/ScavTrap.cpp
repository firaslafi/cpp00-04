/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 10:31:23 by flafi             #+#    #+#             */
/*   Updated: 2024/02/10 12:15:54 by flafi            ###   ########.fr       */
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

// copy constructor
ScavTrap::ScavTrap(const ScavTrap &source)
{
    _name = source._name;
    _hitPoints = source._hitPoints;
    _energyPoints = source._energyPoints;
    _attackDamage = source._attackDamage;
}
// copy assignment operator
ScavTrap& ScavTrap::operator=(const ScavTrap &source)
{
    if (this != &source)
    {
        this->_name = source._name;
        this->_hitPoints = source._hitPoints;
        this->_energyPoints = source._energyPoints;
        this->_attackDamage = source._attackDamage;
    }
    return (*this);
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
void ScavTrap::guardGate(void)
{
    if (this->_hitPoints > 0)
        cout << RED <<this->_name <<" is now guarding the holly gate!!!" << RESET << std::endl;
    else
    cout << RED << this->_name << " can't do the action becauese he's unalive :(" << RESET << std::endl;
}