#include <iostream>

using namespace std;

int main(void)
{
	char* input = new char[101];
	int count = 0;
	cin >> input;

	while (input[count] != '\0')
	{
		++count;
	}

	cout << count << endl;

	delete[] input;

	return 0;
}

//2	2743	�ܾ� ���� ���
//���ڿ��� �Է¹ް� ���̸� ��� ����
