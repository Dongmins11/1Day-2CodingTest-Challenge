#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	long long N{};
	vector<long long> vec{};
	cin >> N;

	int value = 10;

	while (N != 0)
	{
		vec.push_back(N % value);
		N /= value;
	}

	sort(vec.begin(), vec.end(), greater<long long>());

	for (auto iter : vec)
		cout << iter;

	return 0;
}