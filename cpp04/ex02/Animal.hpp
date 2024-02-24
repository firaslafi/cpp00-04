/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:29:16 by flafi             #+#    #+#             */
/*   Updated: 2024/02/24 18:40:32 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./Brain.hpp"

# include <iostream>
# include <string>

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */ // for ANIMAL
#define YELLOW  "\033[33m"      /* Yellow */ // for CAT
#define BLUE    "\033[34m"      /* Blue */ 
#define MAGENTA "\033[35m"      /* Magenta */ // for brain
#define CYAN    "\033[36m"      /* Cyan */ // for DOG
#define WHITE   "\033[37m"      /* White */
#define RESET   "\033[0m"       /* Reset color */

using std::string;
using std::cout;
using std::endl;

class Animal
{
    public:
    
    Animal(void);
    virtual ~Animal(void);
    
    Animal(const Animal &source);
    Animal& operator=(const Animal &source);
    
    string getType(void) const;

    virtual void makeSound(void) const = 0;
    
    
    protected:
    string type;
};
#endif