#include <iostream>

using namespace std;

int main(void)
{
	int N{};
	int Result{};

	cin >> N;

	for (int i = 1; i <= N; ++i)
	{
		int Num = i;
		int Sum = i;

		while (Num > 0)
		{
			//������10 �ϸ� 0~9�� ������
			Sum += Num % 10;
			//������ 10 �ϸ� �� ������
			Num /= 10;
		}

		if (Sum == N)
		{
			Result = i;
			break;
		}
	}

	cout << Result << endl;

	return 0;
}
//2231