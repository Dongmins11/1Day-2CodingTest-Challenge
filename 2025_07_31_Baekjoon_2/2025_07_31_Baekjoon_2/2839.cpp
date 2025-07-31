#include <iostream>

using namespace std;

int main(void)
{
	int N{};
	int Value = 0;
	int Num1 = 5;

	cin >> N;

	while (N >= 0)
	{
		if (N % Num1 == 0)
		{
			Value += N / 5;
			cout << Value << endl;
			return 0;
		}
		N -= 3;
		Value++;
	}

	cout << -1 << endl;
	return 0;
}
//퍼킹 설탕문제