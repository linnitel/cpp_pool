
#ifndef FILE_HPP
# define FILE_HPP

# include <fstream>
# include <iostream>
#include <sstream>
# include <string>

class File {

private:
    std::string const _origFileName;
    std::string const _replaceFileName;
    std::string const &_s1;
    std::string const &_s2;
    std::string _data;
    int _readFile();
    void _changeArg();
    int _writeFile();

public:

    File(std::string file, std::string const &s1, std::string const &s2);
    ~File();

    int replace();
};

#endif
