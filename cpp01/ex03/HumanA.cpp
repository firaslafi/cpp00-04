/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 04:24:28 by flafi             #+#    #+#             */
/*   Updated: 2024/02/03 04:24:28 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./HumanA.hpp"


HumanA::HumanA(std::string name, Weapon& weapon): _name(name), _weapon(weapon)
{
    return ;
};

HumanA::~HumanA(void)
{
    return ;
}

void HumanA::attack(void)
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}