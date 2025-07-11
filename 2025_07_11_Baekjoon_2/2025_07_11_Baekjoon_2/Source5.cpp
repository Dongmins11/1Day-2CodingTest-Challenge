#include <iostream>

using namespace std;

int main(void)
{
	int input1, input2 = 0;

	while (true)
	{
		cin >> input1 >> input2;

		if (input1 + input2 == 0)
			break;

		cout << input1 + input2 << endl;
	}

	return 0;
}
//11	10952	A+B - 5	성공	185304	349352	52.752%
//0 0이 들어올 때까지 A + B를 출력하는 문제
