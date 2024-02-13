/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:41:39 by flafi             #+#    #+#             */
/*   Updated: 2024/02/13 13:55:15 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./Animal.hpp"

#ifndef DOG_HPP
# define DOG_HPP

class Dog:public Animal
{
    public:
    
    Dog(void);
    ~Dog(void);
    
    Dog(const Dog &source);
    Dog& operator=(const Dog &source);

    void makeSound(void) const;
};
#endif