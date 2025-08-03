#include <iostream>
#include <map>

using namespace std;

int main(void)
{
	int N{};
	map<string, string> map;

	string name{};
	string check{};
	string checkEnter = "enter";
	string checkLeave = "leave";

	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		cin >> name >> check;

		if (map.count(name) != 0)
			map.erase(name);
		else
		{
			if(checkLeave != check)
				map.emplace(name, check);
		}
	}

	for (auto it = map.crbegin(); it != map.crend(); ++it)
		cout << it->first << '\n';

	return 0;
}