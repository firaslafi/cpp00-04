/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 04:31:10 by flafi             #+#    #+#             */
/*   Updated: 2024/02/01 04:31:10 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zombies = new Zombie[N];
    int i;

    i = 0;
    while(i < N)
    {
        zombies[i].set_name(name + " " + std::to_string(i+1));
        zombies[i].announce();
        i++;
    }
    return (zombies);
}