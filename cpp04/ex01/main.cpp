/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:27:56 by flafi             #+#    #+#             */
/*   Updated: 2024/02/24 18:33:18 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./Animal.hpp"
# include "./Dog.hpp"
# include "./Cat.hpp"

int main(void)
{
    system("clear");
    // this code should not segfault
    // Dog basic;
    // cout << basic.getBrainAddress() << endl;
    // {
    // Dog tmp = basic;
    // cout << tmp.getBrainAddress() << endl;
    // }
    // cout << basic.getBrainAddress() << endl;
    // ends here
    
    // Dog* basic = new Dog();
    // cout << basic->getBrainAddress() << endl;
    
    // Cat* basics = new Cat();
    // cout << basics->getBrainAddress() << endl;
    
    Animal *array[20];
    int i;
    
    i = 0;
    while (i < 20)
    {
        if (i < 10)
            array[i] = new Cat();
        else
            array[i] = new Dog();
        i++;
    }
    i = 0;
    while (i < 20)
    {
        array[i]->makeSound();
        i++;
    }
    i = 0;
    while (i < 20)
    {
        delete array[i];
        i++;
    }
    // delete basic;
    // delete basics;
    // system("leaks program");
    return (0);
}