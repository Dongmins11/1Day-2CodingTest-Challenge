#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int N{};
	int count{};
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		int input{};
		int num{};
		cin >> input;
		if (input <= 1)
			continue;

		for (int i = 1; i <= input; ++i)
		{
			if ((input % i) == 0)
				++num;
		}

		if (num == 2)
			++count;
	}

	
	cout << count << endl;

	return 0;
}
//1978 소수 찾기