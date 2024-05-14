#pragma once

#include <exception>
template <class T>
class Array
{
public:
	Array() : _arr(new T[0]()), _size(0){};
	Array(unsigned int n) : _arr(new T[n]()), _size(n){};
	virtual ~Array()
	{
		delete[] _arr;
	};

	Array(const Array &from) : _arr(new T[from.size()]()), _size(from.size())
	{
		for (unsigned int i = 0; i < from.size(); i++)
			_arr[i] = from._arr[i];
	}

	unsigned int size(void) const
	{
		return _size;
	}

	Array &operator=(const Array &from)
	{
		if (this == &from)
			return *this;
		if (_arr)
			delete[] _arr;
		_arr = new T[from.size()]();
		_size = from.size();
		for (unsigned int i = 0; i < from.size(); i++)
			_arr[i] = from._arr[i];
	}

	T &operator[](unsigned int i)
	{
		if (i > _size - 1)
			throw ArrException();
		return _arr[i];
	}
	class ArrException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Out of Bounds!";
		}
	};

private:
	T *_arr;
	unsigned int _size;
};
