#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(void)
{
	int N{}, M{};

	set<int> hash{};
	vector<int> checkVec{};

	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		int num{};
		cin >> num;
		hash.emplace(num);
	}


	cin >> M;

	for (int i = 0; i < M; ++i)
	{
		int num{};
		cin >> num;
		checkVec.push_back(hash.find(num) != hash.end() ? 1 : 0);
	}

	for (const auto & iter : checkVec)
		cout << iter << ' ';

	cout << '\n';

	return 0;
}