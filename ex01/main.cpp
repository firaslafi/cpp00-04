/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 03:05:47 by flafi             #+#    #+#             */
/*   Updated: 2024/01/27 03:05:47 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


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

int check_choice(std::string str)
{
    if (str == "1" || str == "2" || str == "3")
        return(1);
    else
        return(0);
}

void print_under_ten(std:: string str)
{
    int i ;
    int len;

    std::string result;
    len = str.length();
    i = 0;
    if (len <= 10)
        std::cout << str;
    else
    {
        while (str[i] && i < 10)
        {
            std::cout << str[i];
            i++;
        }
        std::cout << ".";
    }
}



int main(int argc, char **argv)
{
    PhoneBook pb;
    pb.index = 0;
    pb.total = 0;
    std::string input_cmd;

    system("clear");
    while (1)
    {

        while(!check_choice(input_cmd))
        {
            std::cout << "please select: \n1 -ADD\n";
            std::cout << "2 -SEARCH\n3 -EXIT\n";
            std::cin >> input_cmd;
        }

        if (input_cmd == "1")
        {
            system("clear");
            pb.contacts[pb.index].index = pb.index + 1;
            std::cout << "Enter firstname: \n";
            std::cin >> pb.contacts[pb.index].first_name;
            std::cout << "Enter lastname: \n";
            std::cin >> pb.contacts[pb.index].last_name;
            std::cout << "Enter nickname: \n";
            std::cin >> pb.contacts[pb.index].nickname;       
            std::cout << "Enter phone number: \n";
            std::cin >> pb.contacts[pb.index].number; 
            std::cout << "Enter darkest secret: \n";
            std::cin >> pb.contacts[pb.index].darkest_secret;
            pb.index++;
            if (pb.index == 3)
                pb.index = 0;
            if (pb.total <= 2)
                pb.total++;
            system("clear");
            input_cmd = "0";
        }
        else if (input_cmd == "2")
        {
            int i = 0;
            // show all of them here separeted could be moved to an other function
            if (pb.total == 0)
            {
                system("clear");
                std::cout << "contact list is empty!\n";
                input_cmd = "0";
            }
            else
            {
                while (i < pb.total)
                {
                    std::cout << pb.contacts[i].index << " | ";
                    print_under_ten(pb.contacts[i].first_name);
                    std::cout << " | ";
                    print_under_ten(pb.contacts[i].last_name);
                    std::cout << " | ";
                    print_under_ten(pb.contacts[i].nickname);
                    std::cout << "\n";
                    i++;
                }
                input_cmd = "0";

                int input_index = 0;

                while(input_index < 1 || input_index > 3 || input_index > pb.total)
                {
                    std::cout << "please pick a contact index\n";
                    std::cin >> input_index;
                }
                system("clear");

                std::cout << pb.contacts[input_index - 1].first_name << "\n";
                std::cout << pb.contacts[input_index - 1].last_name << "\n";
                std::cout << pb.contacts[input_index - 1].nickname << "\n";
                std::cout << pb.contacts[input_index - 1].number << "\n";
                std::cout << pb.contacts[input_index - 1].darkest_secret << "\n";
                }

        }
        else if (input_cmd == "3")
        {
            system("clear");
            exit(0);
        }

    }

    return (0);
}