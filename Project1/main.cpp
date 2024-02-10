#include <iostream>

using namespace std;

bool happy_number(int number);

int main() {

	int number;

	do
	{
		cout << "What's your favorite natural number? ";
		cin >> number;
	} while (number < 1);
	

	string msg = happy_number(number) ? " " : "n't ";
	cout << "Your number is" << msg << "happy";

	return 0;
}