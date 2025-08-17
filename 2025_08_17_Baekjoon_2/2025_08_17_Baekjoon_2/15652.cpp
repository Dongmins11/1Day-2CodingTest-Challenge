#include <iostream>
#include <vector>

using namespace std;

int N{};
int M{};
bool visited[9] = { false, };
vector<int> num{};


void DFS(int depth, int start)
{
	if (M == depth)
	{
		for (const auto& iter : num)
			cout << iter << ' ';
		cout << '\n';
		return;
	}

	for (int i = start; i <= N; ++i)
	{
		num.push_back(i);
		DFS(depth + 1, i);
		num.pop_back();
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> N >> M;
	DFS(0, 1); // depth=0, start=1
	return 0;
}