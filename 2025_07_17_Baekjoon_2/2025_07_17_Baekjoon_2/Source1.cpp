#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
	char input[101]{};
	cin >> input;

	int count = strlen(input);
	bool isTrue = true;

	for (int i = 0; i < count / 2; ++i)
	{
		if (input[i] != input[count - i - 1])
			isTrue = false;
	}

	cout << (isTrue ? 1 : 0) << endl;

	return 0;
}

//4	10988 팰린드롬인지 확인하기

