#include <iostream>

using namespace std;

int pivo(int value)
{
	if (value == 0)
		return 0;
	else if (value == 1)
		return 1;

	return pivo(value - 1) + pivo(value - 2);
}

int main(void)
{
	int N{};
	cin >> N;

	cout << pivo(N) << '\n';

	return 0;
}