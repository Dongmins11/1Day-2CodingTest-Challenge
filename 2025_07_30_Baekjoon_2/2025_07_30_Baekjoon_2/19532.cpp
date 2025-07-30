#include <iostream>

using namespace std;

int main(void)
{
	int a{}, b{}, c{}, d{}, e{}, f{};

	cin >> a >> b >> c >> d >> e >> f;

	for (int i = -999; i <= 999; ++i)
	{
		for (int j = -999; j <= 999; ++j)
		{
			int value1 = (a * i) + (b * j);
			int value2 = (d * i) + (e * j);

			if (value1 == c && value2 == f)
			{
				cout << i << " " << j << endl;
				break;
			}
		}
	}

	return 0;
}