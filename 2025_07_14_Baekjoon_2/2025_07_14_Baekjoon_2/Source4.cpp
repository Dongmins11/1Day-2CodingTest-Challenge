#include <iostream>

using namespace std;

int main(void)
{
	int count = 0;
	int result = 0;
	char input[101]{};

	cin >> count;
	cin >> input;

	for (int i = 0; i < count; ++i)
	{
		result += (int)(input[i] - '0');
	}

	cout << result << endl;

	return 0;
}
//5	11720	������ ��
//������ ���ڿ��� �Է¹޴� ����.Pythonó�� ���� ũ�⿡ ������ ���ٸ� ��� ������, ���� 3�� �Ϲ����� ���� �ڷ����� ��⿡ �ʹ� ũ�ٴ� ���� �ָ��սô�.
