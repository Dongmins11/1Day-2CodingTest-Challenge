#include <iostream>

using namespace std;

int main(void)
{
	int N{};
	cin >> N;

	int* Arr = new int[N] {};

	for (int i = 0; i < N; ++i)
		cin >> Arr[i];


	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N - 1; ++j)
		{
			if (Arr[j] > Arr[j + 1])
			{
				int temp = Arr[j];
				Arr[j] = Arr[j + 1];
				Arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < N; ++i)
		cout << Arr[i] << endl;


	delete[] Arr;

	return 0;
}
//버블정렬