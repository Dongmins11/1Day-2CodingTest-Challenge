#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	while (true)
	{
		int Arr[3]{};
		int maxValue = -1;
		int maxindex = 0;

		cin >> Arr[0] >> Arr[1] >> Arr[2];

		if (0 == (Arr[0] + Arr[1] + Arr[2]))
			break;

		for (int i = 0; i < 3; ++i)
		{
			if (maxValue < Arr[i])
			{
				maxValue = Arr[i];
				maxindex = i;
			}
		}

		int value{};

		for (int i = 0; i < 3; ++i)
		{
			if (maxindex != i)
				value += Arr[i];
		}

		if (value <= maxValue)
			cout << "Invalid" << endl;
		else if (Arr[0] == Arr[1] && Arr[0] == Arr[2])
			cout << "Equilateral" << endl;
		else if (Arr[0] == Arr[1] || Arr[0] == Arr[2] || Arr[1] == Arr[2])
			cout << "Isosceles" << endl;
		else
			cout << "Scalene" << endl;
	}

	return 0;
}
//5073 삼각형과 세 변 