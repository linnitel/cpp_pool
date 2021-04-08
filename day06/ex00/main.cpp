
#include <iostream>
#include "Convertion.hpp"

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		Convertion newConv = Convertion();
		for (int i = 1; i < argc; i++) {
			try {
				newConv.convertStr(argv[i]);
				std::cout << newConv << std::endl;
			}
			catch (std::exception &e) {
				std::cout << e.what() << std::endl;
				std::cout << std::endl;
			}
		}
		return 0;
	}
	std::cout << "Wrong number of arguments." << std::endl;
	return 1;
}