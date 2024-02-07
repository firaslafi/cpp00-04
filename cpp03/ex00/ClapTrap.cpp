/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 21:38:53 by flafi             #+#    #+#             */
/*   Updated: 2024/02/07 23:19:42 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./ClapTrap.hpp"

ClapTrap::ClapTrap(void){}

ClapTrap::ClapTrap(string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDammage(0){}

// copy constructor
ClapTrap(const ClapTrap &source)
{
    
}
// copy assignment operator
ClapTrap& ClapTrap::operator=(const ClapTrap &source)
{
    
}