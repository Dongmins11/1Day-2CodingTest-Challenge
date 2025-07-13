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

		int middleCount = (num2 - num1) / 2;

		num1--;
		num2--;

		for (int j = 0; j <= middleCount; ++j)
		{
			int temp = Arr[num1 + j];
			Arr[num1 + j] = Arr[num2 - j];
			Arr[num2- j] = temp;
		}
	}


	for (int i = 0; i < input1; ++i)
		cout << Arr[i] << " ";

	cout << endl;

	delete[] Arr;

	return 0; 
}


//ps.이거 한번더 연습해봐야함

