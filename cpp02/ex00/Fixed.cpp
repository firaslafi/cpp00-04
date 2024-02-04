/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 22:21:52 by flafi             #+#    #+#             */
/*   Updated: 2024/02/05 00:53:47 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./Fixed.hpp"

using std::cout;

Fixed::Fixed(void): _fpValue(0)
{
    cout << "Default constructor called" << std::endl;
}
Fixed::~Fixed(void) 
{
    cout << "Destructor called" << std::endl;
}
// copy constructor
Fixed::Fixed(const Fixed& source): _fpValue(source._fpValue)
{
    cout << "Copy constructor called" << std::endl;
    *this = source;
}
// copy assignment operator overload
Fixed& Fixed::operator=(const Fixed& source)
{
    cout << "Copy assignment operator called" << std::endl;
    if (this != &source)
    {
        this->_fpValue = source.getRawBits();
    }
    return (*this);
}
int Fixed::getRawBits(void) const
{
    cout << "getRawBits member function called" << std::endl;
    return (_fpValue);
}
void Fixed::setRawBits(int const raw)
{
    this->_fpValue = raw;
}