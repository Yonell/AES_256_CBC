//This is a file to test a header file with AES256CBC



#include <iostream>
#include <iomanip>
#include "AES256CBC.h"

int main()
{
	uint8_t key[33] = "god damn it, it finally works!!!";
	uint8_t iv[17] = "Nigdy wiecej ://";
	uint8_t keyexp[240];


	uint8_t state[65] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Proin 4";
	for (auto& i : state)
	{
		std::cout << (i) << "";
	}
	std::cout << "\n\n";
	AES256CBC::encrypt_256_CBC(state, 64, key, iv);
	for (auto& i : state)
	{
		std::cout << std::hex << std::setw(2) << std::setfill('0') << (int)i << " ";
	}
	std::cout << "\n\n";
	AES256CBC::decrypt_256_CBC(state, 64, key, iv);
	for (auto& i : state)
	{
		std::cout << (i) << "";
	}
	std::cout << "\n\n";
	return 0;
}