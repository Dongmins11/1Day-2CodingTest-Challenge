#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(void)
{
	int N{};
	vector<long long> vec{};
	vector<long long> vec2{};
	unordered_map<int, long long> map{};

	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		int num{};
		cin >> num;
		vec.emplace_back(num);
		vec2.emplace_back(num);
	}

	sort(vec.begin(), vec.end());
	auto iter = unique(vec.begin(), vec.end());
	vec.erase(iter, vec.end());

	int index = 0;
	for (auto iter : vec)
		map.emplace(pair<int, long long> {iter, index++});


	for (auto iter : vec2)
		cout << map.at(iter) << ' ';

	cout << '\n';

	return 0;
}