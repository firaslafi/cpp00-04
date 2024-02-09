/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 10:31:20 by flafi             #+#    #+#             */
/*   Updated: 2024/02/09 12:38:43 by flafi            ###   ########.fr       */
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

    void guardGate(void);
    void attack(const std::string &target);
};
#endif