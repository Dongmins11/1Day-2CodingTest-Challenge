#include <iostream>

using namespace std;

int main(void)
{
	int M{};
	int N{};

	int SumNum{};
	int MinNum = -1;

	bool FirstMinCheck = true;

	cin >> M >> N;

	for (int i = M; i <= N; ++i)
	{
		if (i < 2)
			continue;

		bool isCheck = true;

		for (int j = 2; j * j <= i; ++j)
		{
			if (i % j == 0)
			{
				isCheck = false;
				break;
			}
		}

		if (isCheck)
		{
			SumNum += i;
			if (MinNum == -1)
				MinNum = i;
		}

	}
	
	if (SumNum == 0)
		cout << -1 << endl;
	else
		cout << SumNum << endl << MinNum << endl;

	return 0;
}
//2581 소수
//제곱근까지만 연산 하는것 기억