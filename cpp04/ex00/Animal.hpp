/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:29:16 by flafi             #+#    #+#             */
/*   Updated: 2024/02/11 13:43:43 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

using std::string;
using std::cout;

class Animal
{
    public:
    
    Animal(void);
    
    void makeSound(void);
    protected:
    string type;
};
#endif