#include <iostream>
#include <vector>

using namespace std;

int N{};
int M{};
vector<int> num = {};

void DFS(int depth, int start)
{
	if (depth == M)
	{
		for (const auto& iter : num)
			cout << iter << ' ';

		cout << '\n';
		return;
	}

	for (int i = 1; i <= N; ++i)
	{
		num.push_back(i);
		DFS(depth + 1, i + 1);
		num.pop_back();
	}
}

int main(void)
{
	cin >> N >> M;

	DFS(0, 1);

	return 0;
}