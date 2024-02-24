/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 10:37:09 by flafi             #+#    #+#             */
/*   Updated: 2024/02/14 10:42:16 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */ // for ANIMAL
#define YELLOW  "\033[33m"      /* Yellow */ // for CAT
#define BLUE    "\033[34m"      /* Blue */ 
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */ // for DOG
#define WHITE   "\033[37m"      /* White */
#define RESET   "\033[0m"       /* Reset color */

using std::string;
using std::cout;
using std::endl;

class WrongAnimal
{
    public:
    
    WrongAnimal(void);
    ~WrongAnimal(void);
    
    WrongAnimal(const WrongAnimal &source);
    WrongAnimal& operator=(const WrongAnimal &source);
    
    string getType(void) const;

    void makeSound(void) const;
    
    
    protected:
    string type;
};
#endif