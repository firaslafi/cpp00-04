/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 10:38:38 by flafi             #+#    #+#             */
/*   Updated: 2024/02/14 10:44:25 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./WrongCat.hpp"

WrongCat::WrongCat(void)
{
    this->type = "WrongCat";
    cout << YELLOW << "WrongCat: Default WrongCat constructor has been called!" << RESET << endl;
}

WrongCat::~WrongCat(void)
{
    cout << YELLOW << "WrongCat: Destructor called." << RESET << endl;
}
WrongCat::WrongCat(const WrongCat &source)
{
    this->type = source.type;
}
// copy assignment operator
WrongCat& WrongCat::operator=(const WrongCat &source)
{
    if (this != &source)
    {
        this->type = source.type;
    }
    return (*this);
}
void WrongCat::makeSound(void) const
{
    cout << YELLOW << "WrongCat: *Meow* *Meow* *Meow*" << RESET << endl;
}
