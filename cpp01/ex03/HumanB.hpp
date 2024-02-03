/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 04:25:05 by flafi             #+#    #+#             */
/*   Updated: 2024/02/03 04:25:05 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "./Weapon.hpp"

class HumanB
{
    public:

    HumanB(std::string name);
    // HumanB(std::string name, Weapon& weapon);
    ~HumanB(void);

    void attack(void);
    void setWeapon(Weapon& weapon);

    private:
    Weapon* _weapon;
    std::string _name;

};

#endif