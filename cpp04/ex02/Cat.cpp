/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:41:32 by flafi             #+#    #+#             */
/*   Updated: 2024/02/14 12:06:13 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./Cat.hpp"

Cat::Cat(void)
{
    this->type = "Cat";
    this->_brain = new Brain();
    cout << YELLOW << "Cat: Default Cat constructor has been called!" << RESET << endl;
}

Cat::~Cat(void)
{
    cout << YELLOW << "Cat: Destructor called." << RESET << endl;
    delete this->_brain;
}
Cat::Cat(const Cat &source)
{
    this->type = source.type;
    this->_brain = new Brain(*source._brain);
}
// copy assignment operator
Cat& Cat::operator=(const Cat &source)
{
    if (this != &source)
    {
        this->type = source.type;
        this->_brain = new Brain(*source._brain);
    }
    return (*this);
}
void Cat::makeSound(void) const
{
    cout << YELLOW << "Cat: *Meow*" << RESET << endl;
}
Brain* Cat::getBrainAddress() 
{
    return _brain;
}