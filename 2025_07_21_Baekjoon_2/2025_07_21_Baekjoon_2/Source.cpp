#include<iostream>
#include<cstring>

using namespace std;

int main(void)
{
	char N[37]{};
	int B = 0;

	int Result = 0;
	int power = 1;

	cin >> N >> B;

	int Length = strlen(N);

	for (int i = Length - 1; i >= 0; --i)
	{
		int Value = 0;

		if (N[i] >= '0' && N[i] <= '9')
			Value = N[i] - '0';
		else
			Value = N[i] - 'A' + 10;

	  Result += Value * power;
	  power *= B;
	}

	cout << Result << '\n';

	return 0;
}