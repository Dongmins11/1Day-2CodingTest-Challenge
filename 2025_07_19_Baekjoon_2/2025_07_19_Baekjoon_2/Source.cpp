#include <iostream>

using namespace std;

int main(void)
{
	char Arr[5][16] = {};

	for (int i = 0; i < 5; ++i)
		cin >> Arr[i];

	for (int i = 0; i < 15; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if ('\0' == Arr[j][i])
				continue;
			else
				cout << Arr[j][i];
		}
	}

	return 0;
}