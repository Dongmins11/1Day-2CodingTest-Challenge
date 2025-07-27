#include <iostream>

using namespace std;

int main(void)
{
	int x = 0, y = 0;

	for (int i = 0; i < 3; ++i)
	{
		int inputX{}, inputY{};
		cin >> inputX >> inputY;

		x ^= inputX;
		y ^= inputY;
	}

	cout << x  << " " << y << endl;

	return 0;
}
//3009번 xor이용해서 풀이함