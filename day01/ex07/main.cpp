
#include <fstream>
#include <iostream>
#include <sstream>
# include <string>
#include "File.hpp"

// "This program takes two or three arguments (the first is string you want to replace, the second the string you want to replace it with and the third is the file."

int main(int argc, char **argv) {

    if (argc == 4) {
        if (argv[1][0] == '\0') {
            std::cout << "Error: the argument should not be empty." << std::endl;
            return (-1);
        }
        std::string file(argv[3]);
        std::string s1(argv[1]);
        std::string s2(argv[2]);
        File myFile(file, s1, s2);
        if (myFile.replace() == -1) {
            return (-1);
        }
        std::cout << "The file is successfully created." << std::endl;
        return (0);
    }
    std::cout << "Error: wrong number of arguments." << std::endl;
    std::cout << "This program takes two or three arguments (the first is string you want to replace, the second the string you want to replace it with and the third is the file." << std::endl;
    return (-1);
}