#include <iostream>
#include <unordered_map>

using namespace std;

int main(void)
{
	int A{};
	int B{};

	cin >> A >> B;

	unordered_map<int, int> map{};

	for (int i = 0; i < A; ++i)
	{
		int num{};
		cin >> num;
		map[num]++;
	}

	for (int j = 0; j < B; ++j)
	{
		int num{};
		cin >> num;
		map[num]++;
	}

	int count{};

	for (auto iter : map)
	{
		if(iter.second == 1)
		{
			++count;
		}
	}

	cout << count;

	return 0;
}