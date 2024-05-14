#pragma once

#include <string>

template <typename T>
void swap(T &a, T &b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min(T a, T b)
{
	if (a < b)
		return a;
	return b;
}

template <typename T>
T max(T a, T b)
{
	if (a > b)
		return a;
	return b;
}

// template void swap<int>(int &a, int &b);
// template void swap<std::string>(std::string &a, std::string &b);
//
// template int min<int>(int a, int b);
// template std::string min<std::string>(std::string a, std::string b);
//
// template int max<int>(int a, int b);
// template std::string max<std::string>(std::string a, std::string b);
