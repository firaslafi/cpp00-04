/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 21:39:01 by flafi             #+#    #+#             */
/*   Updated: 2024/02/10 08:12:13 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./ClapTrap.hpp"
# include "./ScavTrap.hpp"

int main(void)
{
    ClapTrap a("alpha");
    a.attack("halima");
    // a.beRepaired(1);
    // a.beRepaired(1);
    // a.beRepaired(1);
    // a.beRepaired(1);
    // a.beRepaired(1);
    // a.beRepaired(1);
    // a.beRepaired(1);
    // a.beRepaired(1);
    // a.beRepaired(1);
    // a.beRepaired(1);
    // a.takeDamage(50);
    // a.attack("halima");
    
    ScavTrap one("MESSI");
    // ScavTrap b = one;
    one.attack("Ronaldo");
    one.beRepaired(10);
}