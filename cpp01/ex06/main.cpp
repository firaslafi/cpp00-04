/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 22:06:44 by flafi             #+#    #+#             */
/*   Updated: 2024/02/06 20:45:37 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./Harl.hpp"

int main(int argc, char **argv)
{
    Harl t;
    system("clear");
    if (argc != 2)
        {
            std::cout << "Wrong input please use one argument";
            exit(1);
        }
    t.complain(argv[1]);
    return (0);
}