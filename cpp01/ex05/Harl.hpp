/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 22:40:33 by flafi             #+#    #+#             */
/*   Updated: 2024/02/04 21:52:21 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

#ifndef HARL_HPP
# define HARL_HPP

class Harl 
{
    public:

    Harl(void);
    ~Harl(void);
    
    void complain( std::string level );
    private:
    
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
    // member function pointer
    typedef void (Harl::*t_function)(void);
};

#endif