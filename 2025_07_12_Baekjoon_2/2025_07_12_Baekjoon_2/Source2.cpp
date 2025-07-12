#include <iostream>

using namespace std;

int main(void)
{
	int input = 0;
	int min = 0;
	int max = 0;

	cin >> input;

	int* arr = new int[input];

	for (int i = 0; i < input; ++i)
		cin >> arr[i];

	min = arr[0];
	max = arr[0];

	for (int i = 0; i < input; ++i)
	{
		min = min > arr[i] ? arr[i] : min;
		max = max < arr[i] ? arr[i] : max;
	}

	cout << min << " " << max << endl;

	delete[] arr;

	return 0;
}
//3	10818	최소, 최대
//최솟값과 최댓값을 찾는 문제