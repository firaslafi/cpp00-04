/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 21:02:19 by flafi             #+#    #+#             */
/*   Updated: 2024/02/03 21:34:04 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <fstream>


#ifndef SED_HPP
# define SED_HPP

class Sed
{
    public:

    Sed(std::string filename);
    ~Sed(void);
    
    void replace(std::string input, std::string output, std::string s1, std::string s2);
    
    std::string filename;
    std::string filename_replace;
};

#endif