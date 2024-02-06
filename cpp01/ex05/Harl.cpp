/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 22:40:26 by flafi             #+#    #+#             */
/*   Updated: 2024/02/06 20:34:01 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./Harl.hpp"

using std::cout;
using std::string;

Harl::Harl(void)
{
    return ;
}
Harl::~Harl(void)
{
    return ;
}
void Harl::complain(string level)
{
    t_function functions[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    int foundLevel = 0;
    while(i < 4)
        {
            if (levels[i].compare(level) == 0)
            {
                foundLevel = 1;
                break;
            }
            i++;
        }
    if (foundLevel)
        (this->*functions[i])();
    else
        cout << "please enter a valid level" << std::endl;
}
void Harl::debug(void)
{
    cout << "I love having extra bacon for my" 
        << "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
        << std::endl;  
}
void Harl::info(void)
{
    cout << "I cannot believe adding extra bacon costs more money.";
    cout << " You didn’t put enough bacon in my burger! If you did,";
    cout <<  "I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning(void)
{
    cout << "I think I deserve to have some extra bacon for free.";
    cout << " I’ve been coming for years whereas you started working";
    cout << " here since last month." << std::endl;
}
void Harl::error(void)
{
    cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
// void (Harl::*ptr)(void) = &Harl::debug;