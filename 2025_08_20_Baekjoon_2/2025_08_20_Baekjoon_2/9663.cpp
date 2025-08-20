#include <iostream>
#include <cmath>

using namespace std;

bool isCheck(int level, int* Arr)
{
	for (int i = 0; i < level; ++i)
	{
		if (Arr[level] == Arr[i] || abs(Arr[i] - Arr[level]) == level - i)
			return false;
	}

	return true;
}

void NQueen(int level, int& N, int& totalCount, int* Arr)
{
	if (N == level)
		++totalCount;
	else
	{
		for (int i = 0; i < N; ++i)
		{
			Arr[level] = i;

			if (isCheck(level, Arr))
				NQueen(level + 1, N, totalCount, Arr);
		}
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N{};
	int totalCount{};
	int Arr[15]{0,};

	cin >> N;
	
	NQueen(0, N, totalCount, Arr);

	cout << totalCount << '\n';

	return 0;
}
//몰라도 풀이보면서 해결해나가야할듯...
//코드 자체도 이해를 잘 못했지만 머리 박으면서 분석해보니 어려운건 아니였다..
//재밌구먼 허허