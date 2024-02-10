#include <iostream>

int sum_digit_square(int number) {

	int sum = 0;
	while (number > 0)
	{
		sum += (number % 10) * (number % 10);
		number /= 10;
	}
	return sum;
}

bool different_array_numbers(int* array) {

	return true;
}

bool happy_number(int number) {

	int currentNum = number;
	while (currentNum != 1)
	{
		number = sum_digit_square(number);
		if (!different_array_numbers)
		{
			return false;
		}
	}
	return true;
}

