#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int Arr[3];

	cin >> Arr[0] >> Arr[1] >> Arr[2];

	sort(Arr, Arr + 3);

	bool check = Arr[2] < Arr[0] + Arr[1];

	if (check)
		cout << Arr[0] + Arr[1] + Arr[2] << '\n';
	else
		cout << (Arr[0] + Arr[1]) * 2 - 1 << '\n';

	return 0;
}
//14215 ¼¼¸·´ë