#include <iostream>
#include <vector>

using namespace std;

int N{};
int M{};
vector<int> num = {};
bool visited[9] = { false, };

void DFS(int depth)
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
		if (visited[i])
			continue;

		visited[i] = true;
		num.push_back(i);

		DFS(depth + 1);

		num.pop_back();
		visited[i] = false;
	}
}

int main(void)
{
	cin >> N >> M;

	DFS(0);

	return 0;
}