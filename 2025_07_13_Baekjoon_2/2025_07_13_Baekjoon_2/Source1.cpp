#include <iostream>

using namespace std;

int main(void)
{
	int input1, input2 = 0;

	cin >> input1 >> input2;

	int* Arr = new int[input1] {};

	for (int i = 0; i < input1; ++i)
		Arr[i] = i + 1;

	for (int i = 0; i < input2; ++i)
	{
		int num1, num2 = 0;
		cin >> num1 >> num2;

		--num1; --num2;
		int temp = Arr[num1];
		Arr[num1] = Arr[num2];
		Arr[num2] = temp;
	}

	for (int i = 0; i < input1; ++i)
		cout << Arr[i] << " ";

	cout << endl;

	delete[] Arr;

	return 0;
}