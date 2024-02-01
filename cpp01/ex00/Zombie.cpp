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

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie(void)
{
    std::cout << "<" << this->name << "> " << "Urgghhh... *lifeless groan*\n" ;
}

void Zombie::announce(void)
{
    std::cout << "<" << this->name << "> " << "BraiiiiiiinnnzzzZ...\n" ;
}

