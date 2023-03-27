#include <iostream>
#include "cache.h"

int main()
{
	int number = 0;
	std::cout << "Введите число: ";
	std::cin >> number;
	std::cout << "Числа Фибоначчи: ";

	Cache test(number);
	for (int i = 0; i <= number; i++) {
		std::cout << test.fibonacci(i) << ' ';
	}

	return 0;
}