#include <iostream>

using namespace std;

int main(void)
{
	int input = 0;
	int ResultValue = 0;

	cin >> input;

	if (input % 4 == 0)
	{
		if (input % 100 != 0 || input % 400 == 0)
			cout << "1" << endl;
		else
			cout << "0" << endl;
	}
	else
	{
		cout << "0" << endl;
	}


	return 0;
}

//3	2753	À±³â