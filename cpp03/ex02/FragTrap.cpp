/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:19:34 by flafi             #+#    #+#             */
/*   Updated: 2024/02/10 12:13:35 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./FragTrap.hpp"

FragTrap::FragTrap(void):ClapTrap()
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    cout << "Default FragTrap constructor is called." << std::endl;
}
FragTrap::FragTrap(string name):ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    cout << "Main FragTrap constructor is called " << this->_name << " got created." << std::endl;
}
FragTrap::~FragTrap(void) 
{
    std::cout << "FragTrap destructor called for " << this->_name << "." << std::endl;
}
// copy constructor
FragTrap::FragTrap(const FragTrap &source)
{
    _name = source._name;
    _hitPoints = source._hitPoints;
    _energyPoints = source._energyPoints;
    _attackDamage = source._attackDamage;
}
// copy assignment operator
FragTrap& FragTrap::operator=(const FragTrap &source)
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
void FragTrap::attack(const std::string &target)
{
    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        cout << "FragTrap " << this->_name << " attacks " 
            << target << " causing " << RED << this->_attackDamage << RESET
            << " points of damage!" << std::endl;
        this->_energyPoints--;
        cout << this->_energyPoints << " energy points left." << std::endl;
    }
    else if (this->_hitPoints <= 0)
    {
        cout << "FragTrap " << " is dead and can't be attacked!!!" << std::endl;
    }
    else
    {
        cout << "FragTrap " << BLUE << this->_name << RESET << "is out of energy points, needs to rest"
            << std::endl;
    }
}
void FragTrap::highFivesGuys(void)
{
    if (this->_hitPoints > 0)
        cout << RED << this->_name << " is now sending high five to everyone!" << RESET << std::endl;
    else
        cout << RED << this->_name << " can't do the action becauese he's unalive :(" << RESET << std::endl;
}