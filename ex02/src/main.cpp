#include "Array.hpp"
#include <iostream>

int main()
{
	Array<int> j(5);
	Array<std::string> list(2);

	list[0] = "test";
	list[1] = "plop";

	std::cout << "String array content : " << std::endl;
	for (unsigned int i = 0; i < list.size(); i++)
		std::cout << "list[" << i << "] = " << list[i] << std::endl;

	std::cout << "\nCopy arr :" << std::endl;
	Array<std::string> arrcpied(list);
	std::cout << "Change list[0] to \"murp\"" << std::endl;
	list[0] = "murp";
	std::cout << "arrcpied[0] = " << arrcpied[0] << std::endl;
	std::cout << "List[0] = " << list[0] << std::endl;

	std::cout << "\nInt array content : " << std::endl;
	for (unsigned int i = 0; i < j.size(); i++)
		std::cout << "j" << i << " = " << j[i] << std::endl;

	Array<int> copied = j;
	std::cout << "\nInt array content : " << std::endl;
	for (unsigned int i = 0; i < j.size(); i++)
		std::cout << "copied[" << i << "] = " << copied[i] << std::endl;

	std::cout << "\nModify value (previous + 1): " << std::endl;
	for (unsigned int i = 0; i < j.size(); i++)
		if (i != 0)
			copied[i] = copied[i - 1] + 1;
	for (unsigned int i = 0; i < j.size(); i++)
		std::cout << "copied[" << i << "] = " << copied[i] << std::endl;

	std::cout << "\nSee out of the bound : " << std::endl;
	std::cout << "jx = " << j[j.size() + 1] << std::endl;
}
