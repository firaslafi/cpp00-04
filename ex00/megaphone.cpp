/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 20:13:41 by flafi             #+#    #+#             */
/*   Updated: 2024/01/23 17:08:00 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void ft_print_upper(char *str)
{
    int i;
    char chr;
    
    i = 0;
    while(str[i])
    {
        chr = toupper(str[i]);
        std::cout << chr;
        i++;
    }
}
int main(int argc, char **argv)
{
    int i;

    i = 1;
    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return (0);
    }
    
    while(argv[i])
    {
        ft_print_upper(argv[i]);
        i++;
    }
    std::cout << "\n";
    return (0);
}
