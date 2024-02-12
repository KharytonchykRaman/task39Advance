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

bool happy_number(int number) {

	while (number != 1)
	{
		number = sum_digit_square(number);
		if (number == 4)
		{
			return false;
		}
	}
	return true;
}
