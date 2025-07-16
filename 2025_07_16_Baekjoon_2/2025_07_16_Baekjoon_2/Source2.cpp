#include <iostream>

using namespace std;

int main(void)
{
	int checkArr[6] = { 1, 1, 2, 2, 2, 8 };
	int input[6]{};

	for(int i =0; i < 6; ++i)
		cin >> input[i];

	for (int i = 0; i < 6; ++i)
		cout << checkArr[i] - input[i] << " ";

	cout << endl;

	return 0;
}
//3003 Å·, Äý, ·è, ºñ¼ó, ³ªÀÌÆ®, Æù