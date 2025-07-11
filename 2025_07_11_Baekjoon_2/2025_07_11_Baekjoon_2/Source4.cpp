#include <iostream>

using namespace std;

int main(void)
{
	int input = 0;

	cin >> input;

	for (int i = 0; i < input; ++i)
	{
		for (int k = input - i - 1; k > 0; --k)
		{
			cout << " ";
		}

		for (int j = 0; j < i + 1; ++j)
		{
			cout << "*";
		}

		cout << "\n";
	}

	return 0;
}
//10	2439	º° Âï±â - 2