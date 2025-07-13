#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int divideValue = 42;
	int arr[42] = { 0, };
	int result = 0;

	for (int i = 0; i < 10; ++i)
	{
		int input1 = 0;
		cin >> input1;

		arr[input1 % 42] = 1;
	}


	for (int i = 0; i < 42; ++i)
	{
		if (arr[i] == 1)
			++result;
	}

	cout << result << endl;

	return 0;
}
