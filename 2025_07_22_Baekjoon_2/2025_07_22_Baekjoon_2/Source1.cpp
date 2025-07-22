#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
	int N{};
	cin >> N;
	cout << (int)pow(pow(2, N) + 1, 2) << endl;
	return 0;
}

//규칙찾기 ((2^n) + 1) ^ 2
//2903번