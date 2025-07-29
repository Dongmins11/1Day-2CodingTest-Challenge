#include <iostream>

using namespace std;

int main(void)
{
	long long input{};
	cin >> input;
	cout << ((input * (input -1 ) * (input - 2)) / 6) << endl << 3 << endl;
	return 0;
}
//조합 문제
//c (n,3)
//n(n-1)(n-2) / 6