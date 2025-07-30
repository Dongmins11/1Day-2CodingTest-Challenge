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
			//나머지10 하면 0~9가 나오니
			Sum += Num % 10;
			//나누기 10 하면 그 다음수
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