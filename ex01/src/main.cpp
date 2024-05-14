#include "iter.hpp"
#include <iostream>
#include <string>

void printstrs(std::string &str)
{
	std::cout << str << std::endl;
}

void printints(int &val)
{
	std::cout << "int: " << val << std::endl;
}

int main(void)
{
	{
		std::string strs[3] = {"ok0", "ok1", "ok2"};
		::iter(strs, 3, printstrs);
	}

	{
		int ints[4] = {1, 2, 3, 4};
		::iter(ints, 4, printints);
	}
	return 0;
}
