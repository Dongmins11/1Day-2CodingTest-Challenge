#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	int N{};
	cin >> N;

	if (N == 0)
	{
		cout << 1 << '\n';
		return 0;
	}

	int num = 1;

	for (int i = N; i > 1; --i)
		num *= i;

	cout << num << '\n';

	return 0;
}