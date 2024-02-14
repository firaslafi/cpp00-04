/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:41:32 by flafi             #+#    #+#             */
/*   Updated: 2024/02/14 10:28:23 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./Cat.hpp"

Cat::Cat(void)
{
    this->type = "Cat";
    cout << YELLOW << "Cat: Default Cat constructor has been called!" << RESET << endl;
}

Cat::~Cat(void)
{
    cout << YELLOW << "Cat: Destructor called." << RESET << endl;
}
Cat::Cat(const Cat &source)
{
    this->type = source.type;
}
// copy assignment operator
Cat& Cat::operator=(const Cat &source)
{
    if (this != &source)
    {
        this->type = source.type;
    }
    return (*this);
}
void Cat::makeSound(void) const
{
    cout << YELLOW << "Cat: *Meow*" << RESET << endl;
}