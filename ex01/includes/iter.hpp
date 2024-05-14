#pragma once
#include <cstddef>

template <typename T>
void iter(T *first, size_t len, void (*fun)(T &))
{
	for (size_t i = 0; i < len; i++)
		fun(first[i]);
}
