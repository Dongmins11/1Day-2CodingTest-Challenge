#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

struct Human
{
	int age;
	string name;
};

int main(void)
{
	int N{};

	cin >> N;

	vector<Human> vec;

	for (int i = 0; i < N; ++i)
	{
		Human human;
		cin >> human.age >> human.name;
		vec.emplace_back(human);
	}

	stable_sort(vec.begin(), vec.end(), [](const Human& a, const Human& b) 
		{
			return a.age < b.age;
		});

	for (const auto& iter : vec)
		cout << iter.age << ' ' << iter.name << '\n';

	return 0;
}