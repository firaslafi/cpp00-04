/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 10:57:39 by flafi             #+#    #+#             */
/*   Updated: 2024/02/14 11:47:06 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./Brain.hpp"

Brain::Brain(void)
{
    cout << MAGENTA << "Brain: Default Brain constructor has been called!" << RESET << endl;
}
Brain::~Brain(void)
{
    cout << MAGENTA << "Brain: Destructor called." << RESET << endl;
}
// copy constructor
Brain::Brain(const Brain &source)
{
    *this = source;
}
// copy assignment operator
Brain& Brain::operator=(const Brain &source)
{
    int i;
    
    i = 0;
    if (this != &source)
    {
        while (i < 100)
        {
            this->_ideas[i] = source._ideas[i];
            i++;
        }
    }
    return (*this);
}
