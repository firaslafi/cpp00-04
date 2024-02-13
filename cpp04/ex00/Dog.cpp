/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:41:37 by flafi             #+#    #+#             */
/*   Updated: 2024/02/13 13:56:31 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./Dog.hpp"

Dog::Dog(void)
{
    this->type = "Dog";
    cout << CYAN << "Dog: Default Dog constructor has been called!" << RESET << endl;
}
Dog::~Dog(void)
{
    cout << CYAN << "Dog: Destructor called." << RESET << endl;
}
void Dog::makeSound(void) const
{
    cout << CYAN << "Dog: *Barking out louUUUUUuuuDD....*" << RESET << endl;
}