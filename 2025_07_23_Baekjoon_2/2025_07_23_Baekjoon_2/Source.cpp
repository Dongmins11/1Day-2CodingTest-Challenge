#include <iostream>

using namespace std;

int main(void)
{
	int num1{};
	int num2{};

	while (true)
	{
		cin >> num1 >> num2;

		if (0 == num1 && 0 == num2)
			break;

		if ((num2 % num1) == 0)
			cout << "factor" << endl;
		else if ((num1 % num2) == 0)
			cout << "multiple" << endl;
		else
			cout << "neither" << endl;
	}
	return 0;
}
//5086 ������
//�ѹ� ������ �ѹ�����..��