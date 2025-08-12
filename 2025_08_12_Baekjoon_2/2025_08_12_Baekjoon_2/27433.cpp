#include <iostream>

using namespace std;

long long factory(long long value)
{
	if (value < 2)
		return 1;

	return value * factory(value - 1);
}

int main(void)
{
	long long N{};
	cin >> N;

	cout << factory(N) << '\n';

	return 0;
}