#include <iostream>

using namespace std;

int main(void)
{
	int count = 'a' - 'z';
	char input[101]{};
	int checkArr[26]{};

	cin >> input;

	for (int i = 0; i < 26; ++i)
		checkArr[i] = -1;


	for (int i = 0; input[i] != '\0'; ++i)
	{
		int index = input[i] - 'a';

		if (checkArr[index] == -1)
			checkArr[index] = i;
	}

	for (int i = 0; i < 26; ++i)
		cout << checkArr[i] << " ";

	cout << endl;

	return 0;
}
//요거요거 다시 풀어보기 1주일뒤에 못푼문제들 합쳐서