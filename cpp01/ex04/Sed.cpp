/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 21:02:10 by flafi             #+#    #+#             */
/*   Updated: 2024/02/03 22:38:40 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./Sed.hpp"

using std::ifstream;
using std::ofstream;
using std::cout;
// using string
// using std::getline;

Sed::Sed(std::string filenamex): filename(filenamex)
{
    this->filename_replace = filenamex + ".replace";
    // std::cout << this->filename << " > " << this->filename_replace << std::endl;
};

Sed::~Sed(void)
{
    return ;
};
void Sed::replace(std::string input, std::string output, std::string s1, std::string s2)
{
    system("clear");
    std::string myText;
    ifstream myFile(input);
    if (myFile.is_open())
    {
        if (getline (myFile, myText, '\0'))
        {
            ofstream outputFile(output);
            size_t findPos = myText.find(s1);
            while (findPos != std::string::npos)
            {
                myText.erase(findPos, s1.length());
                myText.insert(findPos, s2);
                findPos = myText.find(s1);
            }
            outputFile << myText;
            outputFile.close();
            myFile.close();
        }
        else
        {
            cout << "Couldn't read the file" << std::endl;
        }
    }
    else 
    {
        cout << "File failed to open or doesn't exists" << std::endl;
        return ;
    }
    
}
