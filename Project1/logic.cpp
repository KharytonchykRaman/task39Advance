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

int get_index_last_natural_num(int* array, int size) {

	for (int i = 0; i < size; i++)
	{
		if (array[i] < 1)
		{
			return i - 1;
		}
	}
}

bool different_array_numbers(int* array, int size) {

	int lastIndex = get_index_last_natural_num(array, size);
	for (int i = lastIndex - 1; i >= 0; i--)
	{
		if (array[i] == array[lastIndex])
		{
			return false;
		}
	}

	return true;
}

bool happy_number(int number) {

	const int size = 100;
	int numbers[size];
	for (int i = 0; i < size; i++)
	{
		numbers[i] = 0;
	}

	for (int j = 0; number != 1; j++)
	{
		numbers[j] = number;
		number = sum_digit_square(number);
		if (!different_array_numbers(numbers, size))
		{
			return false;
		}
	}
	return true;
}

