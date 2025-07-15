#include <iostream>

using namespace std;

int main(void)
{
	char input1[4]{};
	char input2[4]{};

	int num1{}, num2{};

	cin >> input1 >> input2;

	int mul = 100;
	for (int i = 2; i >= 0; --i)
	{
		num1 += (input1[i] - '0') * mul;
		num2 += (input2[i] - '0') * mul;
		mul /= 10;
	}

	cout << ((num1 >= num2) ? num1 : num2) << endl;

	return 0;
}
//9	2908	상수
//숫자를 뒤집어서 비교하는 문제