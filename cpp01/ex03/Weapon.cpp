/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 04:49:39 by flafi             #+#    #+#             */
/*   Updated: 2024/02/02 04:49:39 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./Weapon.hpp"

Weapon::Weapon(void)
{
    
}
Weapon::Weapon(std::string type)
{
    this->_type = type;
};

Weapon::~Weapon(void)
{
    return ;
}

const std::string& Weapon::getType(void)
{
    return(_type);
}

void Weapon::setType(std::string newType)
{
    _type = newType;
}

