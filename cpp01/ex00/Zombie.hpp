/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 03:08:33 by flafi             #+#    #+#             */
/*   Updated: 2024/02/06 20:20:46 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
    public:

    Zombie(void);
    Zombie(std::string name);
    ~Zombie(void);

    void announce(void);
    void set_name(std::string name);
    std::string get_name(void);

    private:
    std::string name;

};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
#endif