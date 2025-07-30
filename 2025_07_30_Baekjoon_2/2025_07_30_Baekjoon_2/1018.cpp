#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int N{}, M{};

	cin >> N >> M;

	string tempW{};
	string tempB{};
	char board[50][50];

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> board[i][j];
		}
	}

	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			if ((i + j) % 2 == 0)
			{
				tempW += 'W';
				tempB += 'B';
			}
			else
			{
				tempW += 'B';
				tempB += 'W';
			}
		}
	}

	//최대값
	int answer = 64;

	for (int i = 0; i <= N - 8; ++i)
	{
		for (int j = 0; j <= M - 8; ++j)
		{
			int countW = 0;
			int countB = 0;

			for (int k = 0; k < 8; ++k)
			{
				for (int n = 0; n < 8; ++n)
				{
					if (board[k + i][n + j] != tempW[k * 8 + n])countW++;
					if (board[k + i][n + j] != tempB[k * 8 + n])countB++;
				}
			}

			answer = min(answer, min(countW, countB));
		}
	}

	cout << answer << endl;

	return 0;
}
//오우 꽤나 고생했는걸.. 체스판녀석