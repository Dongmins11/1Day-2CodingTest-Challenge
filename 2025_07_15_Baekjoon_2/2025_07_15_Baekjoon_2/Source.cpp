#include <iostream>

using namespace std;

int main(void)
{
	int input1 = 0;

	cin >> input1;

	for (int i = 0; i < input1; ++i)
	{
		int count = 0;
		char input[1001]{};

		cin >> count >> input;

		for (int j = 0; input[j] != '\0'; ++j)
		{
			for (int k = 0; k < count; ++k)
			{
				cout << input[j];
			}
		}

		cout << endl;
	}

	return 0;
}

//7	2675	문자열 반복
//각 문자를 반복하여 출력하는 문제
