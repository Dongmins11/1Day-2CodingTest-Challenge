#include <iostream>

using namespace std;

int main(void)
{
	char dir[8][5] = { {"ABC"}, {"DEF"}, {"GHI"}, {"JKL"}, {"MNO"}, {"PQRS"}, {"TUV"}, {"WXYZ"} };
	char input[16]{};

	int count = 0;
	cin >> input;

	for (int k = 0; input[k] != '\0'; ++k)
	{
		for (int i = 0; i < 8; ++i)
		{
			for (int j = 0; dir[i][j] != '\0'; ++j)
			{
				if (dir[i][j] == input[k])
					count += (i + 3);
			}
		}
	}


	cout << count << endl;

	return 0;
}
//10	5622	다이얼
//규칙에 따라 문자에 대응하는 수를 출력하는 문제