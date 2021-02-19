
#include "File.hpp"

File::File(std::string file, std::string const &s1, std::string const &s2): _origFileName(file), _replaceFileName(file + ".replace"), _s1(s1), _s2(s2){
}

File::~File() {
}

int File::_readFile() {
    std::ifstream origFile(this->_origFileName);
    std::stringstream buffer;
    if (origFile.is_open())
    {
        buffer << origFile.rdbuf();
        origFile.close();
        this->_data = buffer.str(buffer);
        return (0);
    }
    else {
        std::cout << "Error: can't open a file." << std::endl;
        return (-1);
    }
}

void File::_changeArg() {
    std::size_t sPos;

    while (true) {
        sPos = this->_data.find(_s1);
        if (sPos == std::string::npos) { break; }
        this->_data.replace(sPos, this->_s1.length(), this->_s2);
    }
}

int File::_writeFile() {
    std::ofstream replaceFile(this->_replaceFileName);
    if (replaceFile.is_open()) {
        replaceFile << this->_data << std::endl;
        replaceFile.close();
        return (0);
    }
    else {
        std::cout << "Error: can't create a file." << std::endl;
        return (-1);
    }
}

int File::replace() {
    if (this->_readFile() == -1) { return (-1); }
    this->_changeArg();
    if (this->_writeFile() == -1) { return (-1); }
    return (0);
}