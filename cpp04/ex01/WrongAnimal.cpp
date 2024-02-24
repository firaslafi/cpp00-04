/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 10:38:41 by flafi             #+#    #+#             */
/*   Updated: 2024/02/14 10:41:05 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): type("WrongAnimalDefaultType")
{
    cout << GREEN << "WrongAnimal: Default WrongAnimal constructor has been called!" << RESET << endl;
}
WrongAnimal::~WrongAnimal(void)
{
    cout << GREEN << "WrongAnimal: Destructor called." << RESET << endl;
}
// copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal &source)
{
    this->type = source.type;
}
// copy assignment operator
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &source)
{
    if (this != &source)
    {
        this->type = source.type;
    }
    return (*this);
}
string WrongAnimal::getType(void) const
{
    return (type);
}

void WrongAnimal::makeSound(void) const
{
    cout << GREEN << "WrongAnimal: *WronganimalSound*" << RESET << endl;
}