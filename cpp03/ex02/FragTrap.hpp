/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:19:37 by flafi             #+#    #+#             */
/*   Updated: 2024/02/10 12:17:28 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./ScavTrap.hpp"

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

class FragTrap: public ClapTrap
{
    public:

    FragTrap(void);
    FragTrap(string name);
    ~FragTrap(void) ;
    
    FragTrap(const FragTrap& other);
    FragTrap& operator=(const FragTrap &source);
    
    void highFivesGuys(void);
    void attack(const std::string &target);
};

#endif