#include "stdafx.h"
#include <cassert>
#include <iostream>

int main()
{
	std::size_t bool1{ sizeof(bool) };
	std::size_t signed_char1{ sizeof(signed char) };
	std::size_t unsigned_char1{ sizeof(unsigned char) };
	std::size_t	char1{ sizeof(char) };
	std::size_t short1{ sizeof(short) };
	std::size_t signed1{ sizeof(signed) };
	std::size_t unsigned1{ sizeof(unsigned) };
	std::size_t int1{ sizeof(int) };
	std::size_t unsigned_short1{ sizeof(unsigned short) };
	std::size_t size_t1{ sizeof(std::size_t) };
	std::size_t	signed_long1{ sizeof(signed long) };
	std::size_t unsigned_long1{ sizeof(unsigned long) };
	std::size_t long1{ sizeof(long) };
	std::size_t float1{ sizeof(float) };
	std::size_t double1{ sizeof(double) };
	std::size_t long_double1{ sizeof(long double) };

	assert(sizeof(char) == 1);
	assert(sizeof(float) == 4);
	assert(sizeof(double) == 8);
	assert(sizeof(bool) == 1);
	assert(sizeof(short) == 2);
	assert(sizeof(long) == 4);
	assert(sizeof(long double) == 8);

	return 0;
}