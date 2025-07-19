#include <iostream>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int iPaper = 10;
	int iBigPaper[100][100] = { 0, };
	int iTestCase = {}, iX = {}, iY = {};
	int iResult = {};

	cin >> iTestCase;

	while (iTestCase--)
	{
		cin >> iX >> iY;

		for (int i = iX; i < iX + iPaper; ++i)
		{
			for (int j = iY; j < iY + iPaper; ++j)
			{
				if (++iBigPaper[i][j] == 1)
					++iResult;
			}
		}
	}
	cout << iResult;

	return 0;
}