#include <iostream>

using namespace std;

int main(void)
{
	int x{};
	int y{};

	cin >> x >> y;

	if (x < 0)
	{
		if (y >= 0)
			cout << "2" << endl;
		else
			cout << "3" << endl;
	}
	else
	{
		if (y >= 0)
			cout << "1" << endl;
		else
			cout << "4" << endl;
	}
	
	return 0;
}

//4	14681	사분면 고르기