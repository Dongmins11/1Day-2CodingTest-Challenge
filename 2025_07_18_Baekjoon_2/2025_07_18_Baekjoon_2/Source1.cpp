#include <iostream>

using namespace std;

int main(void)
{
	int max = 0;
	int row = 0;
	int cul = 0;

	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 9; ++j)
		{
			int input = 0;
			cin >> input;
			if (max <= input)
			{
				max = input;
				row = i + 1;
				cul = j + 1;
			}
		}
	}

	cout << max << endl << row << " " << cul << endl;

	return 0;
}
//2	2566	ÃÖ´ñ°ª