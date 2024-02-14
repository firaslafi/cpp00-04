/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:29:25 by flafi             #+#    #+#             */
/*   Updated: 2024/02/14 10:27:29 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./Animal.hpp"

Animal::Animal(void): type("AnimalDefaultType")
{
    cout << GREEN << "Animal: Default Animal constructor has been called!" << RESET << endl;
}
Animal::~Animal(void)
{
    cout << GREEN << "Animal: Destructor called." << RESET << endl;
}
// copy constructor
Animal::Animal(const Animal &source)
{
    this->type = source.type;
}
// copy assignment operator
Animal& Animal::operator=(const Animal &source)
{
    if (this != &source)
    {
        this->type = source.type;
    }
    return (*this);
}
string Animal::getType(void) const
{
    return (type);
}

void Animal::makeSound(void) const
{
    cout << GREEN << "Animal: *animalSound*" << RESET << endl;
}
