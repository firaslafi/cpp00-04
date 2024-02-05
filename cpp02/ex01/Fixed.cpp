/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 22:31:51 by flafi             #+#    #+#             */
/*   Updated: 2024/02/05 23:46:07 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// bit shifting calculator https://bit-calculator.com/bit-shift-calculator
# include "./Fixed.hpp"

using std::cout;
using std::roundf;
using std::ostream;

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
        this->_fpValue = source._fpValue;
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
// int constructor
Fixed::Fixed(const int nbInt)
{
    cout << "Int constructor called" << std::endl;
    this->_fpValue = (nbInt << this->_fractionalBits);
    
}
// const float point number constructor
Fixed::Fixed(const float nbFloat)
{
    cout << "Float constructor called" << std::endl;
    this->_fpValue = (roundf(nbFloat * (1 << _fractionalBits)));
}
float   Fixed::toFloat( void ) const
{
    return ((float)_fpValue / (1 << _fractionalBits));
}
int Fixed::toInt( void ) const {
    return (_fpValue >> _fractionalBits);
}
ostream &operator<<( std::ostream &outpudstream, Fixed const &num)
{
    outpudstream << num.toFloat();
    return (outpudstream);
}