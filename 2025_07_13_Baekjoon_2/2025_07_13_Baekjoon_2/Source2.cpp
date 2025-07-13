#include<iostream>

using namespace std;


int main(void)
{
	int arr[30] = { 0, };

	int length = sizeof(arr) / sizeof(int);

	for (int i = 0; i < length; ++i)
		arr[i] = i + 1;

	for (int i = 0; i < length - 2; ++i)
	{
		int checkNum = 0;
		cin >> checkNum;

		for (int j = 0; j < length; ++j)
		{
			if (arr[j] != 0 && checkNum == arr[j])
				arr[j] = 0;
		}
	}


	for (int i = 0; i < length; ++i)
	{
		if (arr[i] != 0)
			cout << arr[i] << endl;
	}


	return 0;
}