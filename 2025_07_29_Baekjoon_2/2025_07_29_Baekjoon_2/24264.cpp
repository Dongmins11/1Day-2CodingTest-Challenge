#include <iostream>

using namespace std;

int main(void)
{
	long long input{};
	cin >> input;
	cout << (input * (input - 1) / 2)  << endl << 2 << endl;
	return 0;
}

//1부터 (n-1)까지 더한 것 = 1 + 2 + 3 + ... + (n-1)
//이건 수학에서 공식으로 정리됨
//1부터 k까지의 합 = k(k + 1) / 2