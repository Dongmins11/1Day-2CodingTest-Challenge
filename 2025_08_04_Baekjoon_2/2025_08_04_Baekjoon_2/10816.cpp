#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N{};
	int M{};

	vector<int> vec{};

	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		int num{};
		cin >> num;
		vec.push_back(num);
	}

	sort(vec.begin(), vec.end());

	cin >> M;

	for (int i = 0; i < M; ++i)
	{
		int num{};
		cin >> num;

		auto low = lower_bound(vec.begin(), vec.end(), num);
		auto high = upper_bound(vec.begin(), vec.end(), num);

		cout << high - low << ' ';
	}

	return 0;
}