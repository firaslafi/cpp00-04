/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 22:31:54 by flafi             #+#    #+#             */
/*   Updated: 2024/02/05 23:45:06 by flafi            ###   ########.fr       */
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
    
    private:
    
    int _fpValue;
    static const int _fractionalBits = 8;
};

std::ostream &operator<<( std::ostream &outpudstream, Fixed const &num);
#endif