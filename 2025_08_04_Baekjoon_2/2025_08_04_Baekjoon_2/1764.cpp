#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main(void)
{
	int N{};
	int M{};
	int count{};
	cin >> N >> M;

	unordered_set<string> set{};
	vector<string> vec2{};


	for (int i = 0; i < N; ++i)
	{
		string str;
		cin >> str;
		set.emplace(str);
	}

	for (int i = 0; i < M; ++i)
	{
		string str;
		cin >> str;
		if (set.find(str) != set.end())
		{
			++count;
			vec2.push_back(str);
		}
	}

	sort(vec2.begin(), vec2.end());

	cout << count << '\n';

	for (const auto& iter : vec2)
		cout << iter << '\n';

	return 0;
}