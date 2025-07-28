#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int N{};

	cin >> N;

	int minX = 10001;
	int minY = 10001;

	int maxX = -10001;
	int maxY = -10001;

	for (int i = 0; i < N; ++i)
	{
		int input1{};
		int input2{};

		cin >> input1 >> input2;

		minX = min(minX, input1);
		maxX = max(maxX, input1);

		minY = min(minY, input2);
		maxY = max(maxY, input2);
	}

		cout << ((maxX - minX) * (maxY - minY)) << endl;

	return 0;
}