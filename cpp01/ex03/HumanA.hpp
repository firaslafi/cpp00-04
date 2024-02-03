/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 04:24:57 by flafi             #+#    #+#             */
/*   Updated: 2024/02/03 04:24:57 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "./Weapon.hpp"

class HumanA 
{
    public:

    HumanA(std::string name, Weapon& weapon);
    ~HumanA(void);
    
    void attack(void);

    private:
    Weapon &_weapon;
    std::string _name;

};

#endif
