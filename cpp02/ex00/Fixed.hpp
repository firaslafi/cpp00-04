/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 22:21:57 by flafi             #+#    #+#             */
/*   Updated: 2024/02/05 00:36:40 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

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
    // copy assignment operator overload
    Fixed& operator=(const Fixed& source);

    int getRawBits( void ) const;
    void setRawBits( int const raw );
    
    private:
    
    int _fpValue;
    static const int fractionalBits = 8;
};

#endif