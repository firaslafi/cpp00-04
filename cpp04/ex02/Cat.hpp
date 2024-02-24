/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:41:34 by flafi             #+#    #+#             */
/*   Updated: 2024/02/14 11:53:43 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./Animal.hpp"

#ifndef CAT_HPP
# define CAT_HPP

class Cat:public Animal
{
    public:
    
    Cat(void);
    ~Cat(void);
    
    Cat(const Cat &source);
    Cat& operator=(const Cat &source);

    void makeSound(void) const;
    Brain* getBrainAddress();
    
    private:
    Brain* _brain;
};

#endif