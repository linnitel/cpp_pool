
#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
    int i;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (i = 1; i < argc; i++)
        {
            for (int j = 0; argv[i][j]; j++)
                std::cout << (char)std::toupper(argv[i][j]);
            if (i < argc - 1)
                std::cout << " ";
            else
                std::cout << std::endl;
        }
    }
}
