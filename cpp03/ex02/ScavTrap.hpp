/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 10:31:20 by flafi             #+#    #+#             */
/*   Updated: 2024/02/10 12:15:05 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

# include "./ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

class ScavTrap:public ClapTrap
{
    public:
    ScavTrap(void);
    ScavTrap(string name);
    ~ScavTrap(void) ;
    // copy constructor
    ScavTrap(const ScavTrap &source);
    // copy assignment operator
    ScavTrap& operator=(const ScavTrap &source);
    
    void guardGate(void);
    void attack(const std::string &target);
};
#endif