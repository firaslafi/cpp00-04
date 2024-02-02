/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 03:14:35 by flafi             #+#    #+#             */
/*   Updated: 2024/01/31 03:14:35 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./Zombie.hpp"

// default constructor
Zombie::Zombie(void)
{
    this->set_name("unkownZombie");
}
// added to access the private explicitly
void Zombie::set_name(std::string name)
{
    this->name = name;
}
// getter for name
std::string Zombie::get_name(void)
{
    return (this->name);
}
// constructor with the name
Zombie::Zombie(std::string name)
{
    this->set_name(name);
}
// destructor
Zombie::~Zombie(void)
{
    std::cout << this->get_name() << ": " << "Urgghhh... *lifeless groan*\n" ;
}

void Zombie::announce(void)
{
    std::cout << this->get_name() << ": " << "BraiiiiiiinnnzzzZ...\n" ;
}

