#include <iostream>

using namespace std;

int main(void)
{
	int inputValue = 0;
	int totalValue = 0;
	int count = 0;
	
	cin >> inputValue;
	cin >> count;

	int* pArr = new int[count];

	for (int i = 0; i < count; ++i)
	{
		int value = 0;
		int amount = 0;

		cin >> value >> amount;

		totalValue += (value * amount);
	}

	if (inputValue == totalValue)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;


	delete[] pArr;

	return 0;
}
//4	25304	¿µ¼öÁõ