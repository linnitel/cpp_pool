
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
	std::string strOne = std::string(getRandomString());
	static int strOneSize = static_cast<int>(strOne.size());
	int *num = new int;
	*num = std::rand() % 1000;
	std::string strTwo = std::string(getRandomString());
	static int strTwoSize = static_cast<int>(strTwo.size());
	char *raw = new char[strOneSize + (sizeof(int) * 3) + strTwoSize];
	raw =
	return raw;
}

Data *deserialize(void *raw) {
	(void)raw;
}

int main()
{
	void *raw = serialize();
	newData *data = deserialize(raw);
	return 0;
}