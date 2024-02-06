/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:40:23 by flafi             #+#    #+#             */
/*   Updated: 2024/02/06 20:06:34 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <cmath>
# include <fstream>

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
    public:
    
    // default constructor
    Fixed(void);
    ~Fixed(void);
    
    // copy constructor
    Fixed(const Fixed& source);
    
    Fixed(const int nbInt);
    Fixed(const float nbFloat);
    
    // copy assignment operator overload
    Fixed& operator=(const Fixed& source);
    
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    
    float toFloat( void ) const;
    int toInt( void ) const;
    
    // ex02 things
    
    /* the const  indicates that calling this operator will not modify
    the state of the current object (*this) it's simply adding the
    value of the obj object to the current object and returning
    the result as a new Fixed object*/
    // comparison operators
    bool operator>(const Fixed& obj) const;
    bool operator<(const Fixed& obj) const;
    bool operator>=(const Fixed& obj) const;
    bool operator<=(const Fixed& obj) const;
    bool operator==(const Fixed& obj) const;
    bool operator!=(const Fixed& obj) const;
    
    // arithmetic operators
    
    Fixed operator+(const Fixed &ojb) const;
    Fixed operator*(const Fixed &ojb) const;
    Fixed operator/(const Fixed &ojb) const;
    Fixed operator-(const Fixed &ojb) const;
    
    // increment & decrement

    Fixed &operator++(void); //pre
    Fixed operator++(int distinct); // post
    
    Fixed &operator--(void);
    Fixed operator--(int distinct);

    // max & min
    static Fixed &min(Fixed &a, Fixed &b);
    static const Fixed &min(const Fixed &a, const Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);
    
    private:
    
    int _fpValue;
    static const int _fractionalBits = 8;
};
// overloading the << operator for COUT so it can print something
std::ostream &operator<<( std::ostream &outpudstream, Fixed const &num);
#endif