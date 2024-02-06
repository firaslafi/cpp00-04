/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 22:08:42 by flafi             #+#    #+#             */
/*   Updated: 2024/02/06 20:42:46 by flafi            ###   ########.fr       */
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
            foundLevel = 0;
            break;
        }
        i++;
    }
    switch(i)
    {
        case 0:
            (this->*functions[0])();
            // break;
        case 1:
            (this->*functions[1])();
            // break;
        case 2:
            (this->*functions[2])();
            // break;
        case 3:
            (this->*functions[3])();
            break;
        default:
            cout << "[ Probably complaining about insignificant problems ]";
    }
    // if (foundLevel)
    //     (this->*functions[i])();

}
void Harl::debug(void)
{
    cout << "[ DEBUG ]" << std::endl;
    cout << "I love having extra bacon for my" 
        << "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
        << std::endl << std::endl;  
}
void Harl::info(void)
{
    cout << "[ INFO ]" << std::endl;
    cout << "I cannot believe adding extra bacon costs more money.";
    cout << " You didn’t put enough bacon in my burger! If you did,";
    cout <<  "I wouldn’t be asking for more!" << std::endl << std::endl;
}
void Harl::warning(void)
{
    cout << "[ WARINING]" << std::endl;
    cout << "I think I deserve to have some extra bacon for free.";
    cout << " I’ve been coming for years whereas you started working";
    cout << " here since last month." << std::endl << std::endl;
}
void Harl::error(void)
{
    cout << "[ ERROR ]" << std::endl;
    cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}