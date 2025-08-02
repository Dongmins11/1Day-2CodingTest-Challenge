#include <iostream>

using namespace std;

const int Max = 10001;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	int countMax[Max]{};

	int N{};
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		int num{};
		cin >> num;

		countMax[num]++;
	}


	for (int i = 1; i < Max; ++i)
	{
		//0�̶�� ���ǿ� false�� 0�̾ƴϸ� ���̴ϱ� ��� ������� ��������
		//�ֳĸ� ������ ���� �濡�ִ� ���ڸ� ++��������
		//�̰� ���ȣ�� ������ִ� ��
		while (countMax[i]--)
			cout << i << '\n';
	}


	return 0;
}

//�Է°��� ������ �Է� ������ ������

//�� �Է°� 10000�� �ִ�
//������ ������ ���� 100000000��