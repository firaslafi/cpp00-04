/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 04:18:37 by flafi             #+#    #+#             */
/*   Updated: 2024/02/01 04:18:37 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./Zombie.hpp"

void randomChump(std::string name)
{
    Zombie randomChump(name);
    randomChump.announce();
}