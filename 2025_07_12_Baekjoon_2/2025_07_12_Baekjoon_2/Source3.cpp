#include <iostream>

using namespace std;

int main(void)
{
	int arr[9] = { 0, };

	int minValue = 0;
	int minIndex = 0;

	for (int i = 0; i < 9; ++i)
		cin >> arr[i];
	
	minValue = arr[0];

	for (int i = 0; i <9; ++i)
	{
		if (minValue <= arr[i])
		{
			minValue = arr[i];
			minIndex = i + 1;
		}
	}

	cout << minValue << endl;
	cout << minIndex << endl;

	return 0;
}

//4	2562	최댓값
//최댓값이 어디에 있는지 찾는 문제