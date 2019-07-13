#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <stdexcept>
#include <exception>

template <typename T>
class Array
{
private:
	unsigned int _len;
	T *_arr;

public:
	Array() : _len(0), _arr(new T[0]){};
	Array(unsigned int n) : _len(n), _arr(new T[n]){};
	Array(size_t n) : _len(n), _arr(new T[n]){};
	Array(int n) : _len(n)
	{
		if (n <= 0)
			return;
		_arr = new T[n];
	}
	~Array()
	{
		delete[] _arr;
	};
	Array(Array &other)
	{
		*this = other;
	}
	unsigned int size() const
	{
		return _len;
	}
	Array &operator=(Array const &other)
	{
		_len = other._len;
		_arr = other._arr;

		_arr = new T[other.size()];
		for (size_t i = 0; i < other.size(); i++)
		{
			_arr[i] = other[i];
		}
		return *this;
	}
	T &operator[](unsigned int i) const
	{
		if (i >= _len)
			throw std::range_error("Exception: attemps to access unaccesible memory.");
		else
			return _arr[i];
	}
};

#endif
