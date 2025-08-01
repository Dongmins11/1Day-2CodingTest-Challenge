#include <iostream>

using namespace std;

int main(void)
{
	int Arr[5]{};
	int average{};

	for (int i = 0; i < 5; ++i)
	{
		cin >> Arr[i];
		average += Arr[i];
	}

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5 - 1; ++j)
		{
			if (Arr[j] > Arr[j + 1])
			{
				int temp = Arr[j];
				Arr[j] = Arr[j + 1];
				Arr[j + 1] = temp;
			}
		}
	}

	average /= 5;
	cout << average << endl << Arr[2];

	return 0;
}