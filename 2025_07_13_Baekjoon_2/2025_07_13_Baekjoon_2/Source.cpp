#include<iostream>

using namespace std;

int main(void)
{
	int input1, input2 = 0;

	cin >> input1 >> input2;

	int* Arr = new int[input1] {};

	for (int i = 0; i < input2; ++i)
	{
		int start, end, value = 0;

		cin >> start >> end >> value;

		for (int j = start - 1; j < end; ++j)
		{
			if (Arr[j] != 0)
				Arr[j] = 0;

			Arr[j] = value;
		}
	}


	for (int i = 0; i < input1; ++i)
		cout << Arr[i] << " ";

	cout << endl;

	delete[] Arr;

	return 0;
}