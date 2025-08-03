#include <iostream>
#include <vector>
#include <cctype>
#include<string>
#include <unordered_map>

using namespace std;

bool isAllDigit(const string& s) {
	for (char c : s) {
		if (!isdigit(c)) return false;
	}
	return !s.empty();
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N{}, M{};

	vector<string> vec{};
	unordered_map<string, int> map{};
	string name{};

	cin >> N >> M;

	for (int i = 0; i < N; ++i)
	{
		cin >> name;
		vec.push_back(name);
		map[name] = i + 1;
	}


	for (int i = 0; i < M; ++i)
	{
		string str;
		cin >> str;

		if (isAllDigit(str))
			cout << vec[stoi(str) - 1] << '\n';
		else
			cout << map[str] << '\n';
	}

	return 0;
}