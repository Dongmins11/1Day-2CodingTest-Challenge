#include <iostream>

using namespace std;

int main(void)
{
	long long input{};
	cin >> input;
	cout << (input * (input - 1) / 2)  << endl << 2 << endl;
	return 0;
}

//1���� (n-1)���� ���� �� = 1 + 2 + 3 + ... + (n-1)
//�̰� ���п��� �������� ������
//1���� k������ �� = k(k + 1) / 2