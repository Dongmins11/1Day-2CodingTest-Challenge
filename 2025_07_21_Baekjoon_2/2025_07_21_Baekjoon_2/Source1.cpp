#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int N{};
	int B{};

	string temp = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string Result = "";

	cin >> N >> B;

	while (0 < N)
	{
		Result = temp[N % B] + Result;
		N /= B;
	}

	cout << Result << endl;

	return 0;
}
//진법변환