#include <iostream>

using namespace std;

int main(void)
{
	int T{};

	cin >> T;

	int Q = 25;
	int D = 10;
	int N = 5;
	int P = 1;

	for (int i = 0; i < T; ++i)
	{
		int C{};
		cin >> C;

		cout << C / Q << " ";
		C %= Q;
		cout << C / D << " ";
		C %= D;
		cout << C / N << " ";
		C %= N;
		cout << C / P << " ";

		cout << endl;
	}


	return 0;
}
//센트 단위다 ㅇㅇ 단위 잘보기
//2720번