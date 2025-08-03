#include <iostream>
#include <unordered_set>

using namespace std;

int main(void)
{
	int N{}, M{}, count{};
	unordered_set<string> set;

	cin >> N >> M;

	for (int i = 0; i < N; ++i)
	{
		string str{};
		cin >> str;
		set.insert(str);
	}


	for (int i = 0; i < M; ++i)
	{
		string str{};
		cin >> str;
		if (set.find(str) != set.end())
			++count;
	}


	cout << count << '\n';

	return 0;
}
//문자열 집합
//count가 더 빠르데??..
//중복된값이없기에 빠르게 갯수만 세고 나오는거라 더빠르다네