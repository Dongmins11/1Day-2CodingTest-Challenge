#include <iostream>

using namespace std;

int main(void)
{
	int input1 = 0;
	int input2 = 0;

	int Arr[100][100]{};


	cin >> input1 >> input2;

	for (int k = 0; k < 2; ++k)
	{
		for (int i = 0; i < input1; ++i)
		{
			for (int j = 0; j < input2; ++j)
			{
				int value = 0;
				cin >> value;
				Arr[i][j] += value;
			}
		}
	}

	for (int i = 0; i < input1; ++i)
	{
		for (int j = 0; j < input2; ++j)
		{
			cout << Arr[i][j] << " ";
		}

		cout << endl;
	}


	return 0;
}
//1	2738	Çà·Ä µ¡¼À