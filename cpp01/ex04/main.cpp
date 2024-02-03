/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 20:56:05 by flafi             #+#    #+#             */
/*   Updated: 2024/02/03 22:33:53 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./Sed.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "invalid arguments number";
        return (1);
    }
    Sed file(argv[1]);
    file.replace(argv[1], file.filename_replace, argv[2], argv[3]);
    return (0);
}