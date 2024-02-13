/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:41:32 by flafi             #+#    #+#             */
/*   Updated: 2024/02/13 13:55:51 by flafi            ###   ########.fr       */
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
void Cat::makeSound(void) const
{
    cout << YELLOW << "Cat: *Meow*" << RESET << endl;
}