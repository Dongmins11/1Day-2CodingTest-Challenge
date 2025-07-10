#include <iostream>

using namespace std;

int main(void)
{
	int Arr[3] = {0,};
	int MaxValue = 0;

	int Result = 0;
	int Value = 0;

	int Answer = 0;

	cin >> Arr[0] >> Arr[1] >> Arr[2];

	for (int i = 0; i < 2; ++i)
	{
		for (int j = i + i; j < 3; ++j)
		{
			if (Arr[i] == Arr[j] && 2 != Result)
			{
				++Result;
				Value = Arr[j];
			}
		}
	}

	for (int i = 0; i < 3; ++i)
	{
		if (MaxValue <= Arr[i])
			MaxValue = Arr[i];
	}


	if (Result == 2)
		Answer = 10000 + Value * 1000;
	else if (Result == 1)
		Answer = 1000 + Value * 100;
	else
		Answer = MaxValue * 100;

	cout << Answer << endl;

	return 0;
}
//해결못함 이유좀 공부해야할듯