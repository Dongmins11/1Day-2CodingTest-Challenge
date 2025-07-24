#include <iostream>

using namespace std;

int main(void)
{
	int N{};
	int K{};

	cin >> N >> K;

	int count{};

	for (int i = 1; i <= N; ++i)
	{
		if (N % i == 0)
		{
			count++;

			if (count == K)
			{
				cout << i << '\n';
				return 0;
			}
		}
	}
	
	cout << 0 << endl;

	return 0;
}
//2501 약수구하기