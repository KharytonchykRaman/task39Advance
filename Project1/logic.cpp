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

	int numbers[100];
	for (int i = 0; i < 100; i++)
	{
		numbers[i] = 0;
	}

	for (int i = 0; number != 1; i++)
	{
		numbers[i] = number;
		number = sum_digit_square(number);
		if (!different_array_numbers(numbers))
		{
			return false;
		}
	}
	return true;
}

