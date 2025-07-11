#include <iostream>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int input = 0;

	cin >> input;

	for (int i = 0; i < input; ++i)
	{
		int num1, num2 =0;  
		cin >> num1 >> num2;
		cout << num1 + num2 << "\n";
	}

	return 0;
}
//6	15552	ºü¸¥ A+B