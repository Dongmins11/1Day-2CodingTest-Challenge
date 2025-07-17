#include <iostream>

using namespace std;

int main(void)
{
	int input{};

	cin >> input;

	for (int i = 1; i <= input; ++i)
	{
		for (int j = 0; j < input - i; ++j)
			cout << " ";

		for (int k = 0; k < 2 * i - 1; ++k)
		{
			cout << "*";
		}
		cout << endl;
	}


	for (int i = input - 1; i >= 1; --i)
	{
		for (int j = 0; j < input - i; ++j)
			cout << " ";

		for (int k = 0; k < 2 * i - 1; ++k)
		{
			cout << "*";
		}
		cout << endl;
	}


	return 0;
}
//3	2444	º° Âï±â - 7