/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 10:38:44 by flafi             #+#    #+#             */
/*   Updated: 2024/02/14 10:44:01 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./WrongAnimal.hpp"
#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

class WrongCat:public WrongAnimal
{
    public:
    
    WrongCat(void);
    ~WrongCat(void);
    
    WrongCat(const WrongCat &source);
    WrongCat& operator=(const WrongCat &source);

    void makeSound(void) const;
};

#endif