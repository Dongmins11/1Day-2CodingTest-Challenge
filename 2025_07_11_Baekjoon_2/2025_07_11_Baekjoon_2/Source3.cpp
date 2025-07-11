#include <iostream>

using namespace std;

int main(void)
{
	int input = 0;

	cin >> input;

	for (int i = 0; i < input; ++i)
	{
		for (int j = 0; j < i + 1; ++j)
		{
			cout << "*";
		}

		cout << "\n";
	}

	return 0;
}
//9	2438	º° Âï±â - 1