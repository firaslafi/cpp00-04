/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 04:49:21 by flafi             #+#    #+#             */
/*   Updated: 2024/02/03 20:52:48 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./HumanA.hpp"
# include "./HumanB.hpp"
int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        // std::cout << club.getType();
        bob.attack();
        }
    {
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    // jim.attack();
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
    }
    return (0);
}
