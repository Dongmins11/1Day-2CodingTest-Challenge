#include <iostream>

using namespace std;

int main(void)
{
	int N{};
	int M{};
	int MaxValue{};

	cin >> N >> M;

	int* Arr = new int[N]{};

	for (int i = 0; i < N; ++i)
		cin >> Arr[i];

	for (int i = 0; i < N - 2; ++i)
	{
		for (int j = i + 1; j < N - 1; ++j)
		{
			for (int k = j + 1; k < N; ++k)
			{
				int Value = Arr[i] + Arr[j] + Arr[k];

				if (M >= Value && MaxValue < Value)
					MaxValue = Value;
			}
		}
	}

	cout << MaxValue;
	delete[] Arr;

	return 0;
}
//브루트 포스