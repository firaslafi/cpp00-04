/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 21:38:53 by flafi             #+#    #+#             */
/*   Updated: 2024/02/09 12:40:15 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./ClapTrap.hpp"


// default constructor
ClapTrap::ClapTrap(void): _name("defaultName"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    cout << "Default ClapTrap constructor is called." << std::endl;
}
// ClapTrap::ClapTrap(void)
// {
//     cout << "Default constructor is called." << std::endl;
// }
ClapTrap::~ClapTrap(void)
{
    cout << "Destructor is called " << this->_name << " vanished!" << std::endl;
}
// main constructor
ClapTrap::ClapTrap(string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    cout << "Main ClapTrap constructor is called " << this->_name << " got created." << std::endl;
}

// copy constructor
ClapTrap::ClapTrap(const ClapTrap &source)
{
    _name = source._name;
    _hitPoints = source._hitPoints;
    _energyPoints = source._energyPoints;
    _attackDamage = source._attackDamage;
}
// copy assignment operator
ClapTrap& ClapTrap::operator=(const ClapTrap &source)
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

void ClapTrap::attack(const std::string &target)
{
    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        cout << "ClapTrap " << this->_name << " attacks " 
            << target << " causing " << this->_attackDamage 
            << " points of damage!" << std::endl;
        this->_energyPoints--;
        cout << this->_energyPoints << " energy points left." << std::endl;
    }
    else if (this->_hitPoints <= 0)
    {
        cout << "ClapTrap " << " is dead and can't be attacked!!!" << std::endl;
    }
    else
    {
        cout << "ClapTrap " << this->_name << "is out of energy points, needs to rest"
            << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        cout << "ClapTrap " << this->_name << " is in repairing mode for " 
            << amount << " hit point " << std::endl;
        this->_hitPoints += amount;
        this->_energyPoints--;
        cout << "new HP is " << this->_hitPoints << " points." << std::endl;
        cout << this->_energyPoints << " energy points left." << std::endl;
    }
    else if (this->_hitPoints <= 0)
    {
        cout << "ClapTrap " << " is dead and can't be repaired!!!" << std::endl;
    }
    else 
    {
        cout << "ClapTrap " << this->_name << "is out of energy points :( needs to rest"
            << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    cout << "ClapTrap " << this->_name << " is taking damage for -"
        << amount << " HP" << std::endl;
    this->_hitPoints -= amount;
    if (this->_hitPoints < 0)
        this->_hitPoints = 0;
     cout << "new HP is " << this->_hitPoints << " points." << std::endl;
}
