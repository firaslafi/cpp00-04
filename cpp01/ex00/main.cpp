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
	Zombie	*z1;

	z1 = newZombie("flafi");
	z1->announce();
	randomChump("42hn");

	delete z1;
	return 0;
}