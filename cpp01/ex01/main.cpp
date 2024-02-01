/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:55:25 by flafi             #+#    #+#             */
/*   Updated: 2024/01/31 20:55:25 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./Zombie.hpp"

int main(void) 
{
	int N;
	Zombie *zombies;

	N = 15;
	zombies = zombieHorde(N, "Horde X");
	delete [] zombies;
	return (0);
}