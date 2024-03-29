/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 04:50:16 by flafi             #+#    #+#             */
/*   Updated: 2024/02/02 04:50:16 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
    public:

    Weapon(void);
    Weapon(std::string type);
    ~Weapon(void);

    const std::string& getType(void);
    void setType(std::string newType);

    private:
    std::string _type;
};
#endif