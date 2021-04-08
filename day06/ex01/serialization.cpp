
#include "serialization.hpp"

std::string getRandomString() {
	std::string str = "";
	int numLetters[] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	char consonants[] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z'};
	char vowels[] = {'a','e','i','o','u','y'};
	int nameLen;

	nameLen = numLetters[std::rand() % 10];
	for (int i = 0; i < nameLen; i++) {
		if (i == 0)
			str += (char)std::toupper(consonants[std::rand() % 20]);
		else {
			if (i % 2 == 0) {
				if (std::rand() % 6 > 2)
					str += vowels[std::rand() % 6];
				else
					str += consonants[std::rand() % 20];
			}
			else {
				if (std::rand() % 6 > 2)
					str += consonants[std::rand() % 20];
				else
					str += vowels[std::rand() % 6];
			}
		}
	}
	return (str);
}

void *serialize(void) {
	std::srand(std::time(0));
	char *raw;
	raw = new char[sizeof(std::string) * 2 + sizeof(int)];
	std::string *strOne = reinterpret_cast<std::string*>(raw);
	new (strOne) std::string(getRandomString());
	std::cout << "String one: " << *strOne << std::endl;
	int *num = reinterpret_cast<int*>(raw + sizeof(std::string));
	*num = std::rand() % 21000;
	std::cout << "Number: " << *num << std::endl;
	std::string *strTwo = reinterpret_cast<std::string*>(raw + sizeof(std::string) + sizeof(int));
	new (strTwo) std::string(getRandomString());
	std::cout << "String two: " << *strTwo << std::endl;
	return raw;
}

Data *deserialize(void *raw) {
	Data *data = new Data;
	data->strOne = *reinterpret_cast<std::string*>(raw);
	data->num = *reinterpret_cast<int*>(reinterpret_cast<char*>(raw) + sizeof(std::string));
	data->strTwo = *reinterpret_cast<std::string*>(reinterpret_cast<char*>(raw) + sizeof(std::string) + sizeof(int));
	return data;
}

int main()
{
	void *raw = serialize();
	Data *data = deserialize(raw);
	std::cout << "String one: " << data->strOne << std::endl;
	std::cout << "Number: " << data->num << std::endl;
	std::cout << "String two: " << data->strTwo << std::endl;
	delete data;
	delete reinterpret_cast<char*>(raw);
	return 0;
}