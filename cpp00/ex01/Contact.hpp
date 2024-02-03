/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 20:42:59 by flafi             #+#    #+#             */
/*   Updated: 2024/02/03 20:45:12 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
    public:
    int index;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string number;
    std::string darkest_secret;


};

class PhoneBook
{
    public:
    Contact contacts[3];
    int index;
    int total;
};



#endif