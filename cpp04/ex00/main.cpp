/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:27:56 by flafi             #+#    #+#             */
/*   Updated: 2024/02/13 13:57:05 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./Animal.hpp"
# include "./Dog.hpp"
# include "./Cat.hpp"

int main(void)
{
    const Animal* meta = new Animal();  
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    return (0);
}