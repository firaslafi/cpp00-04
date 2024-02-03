/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 04:24:26 by flafi             #+#    #+#             */
/*   Updated: 2024/02/03 20:51:09 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
    this->_weapon = new Weapon("no weapon");
    // (_weapon).setType("no weapon");
    return ;
};

// HumanB::HumanB(std::string name, Weapon& weapon): _name(name), _weapon(weapon)
// {
//     return ;
// };

HumanB::~HumanB(void)
{
    return ;
}

void HumanB::attack(void)
{
    std::cout << _name << " attacks with their " << (*_weapon).getType() << std::endl;
}
void HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}
