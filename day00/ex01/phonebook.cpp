
#include <iostream>
#include <cctype>
#include <string>
#include "myPhoneBook.class.hpp"

int main(void)
{
    myPoneBook  book;
    std::string command;

    std::cout << "||| Welcome to the Awesome Phonebook by tisabel! |||" << std::endl;
    std::cout << "||| Possible commands:                           |||" << std::endl;
    std::cout << "||| ADD - to add a new contact                   |||" << std::endl;
    std::cout << "||| SEARCH - to search existing list             |||" << std::endl;
    std::cout << "||| EXIT - to delete all and exit program        |||" << std::endl;

    while (true)
    {
        std::cout << "||| Write a command:";
        std:cin >> command;
        if (command == "ADD")
        {
            myPoneBook:myPhoneBook();
        }
        else if (command == "SEARCH")
        {

        }
        else if (command == "EXIT")
            return (0);
        else
            std::cout << "Wrong command! Please try some of these: ADD, SEARCH, EXIT" << std::endl;
    }
}