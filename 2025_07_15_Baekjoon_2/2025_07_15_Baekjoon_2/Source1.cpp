#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	char input[1000001]{};
	int index = 0;
	int count = 0;

	cin.getline(input, 1000001, '\n');

	while (input[index] != '\0')
	{
		if (input[index] == ' ')
			++count;

		++index;
	}

	if (input[0] != ' ')
		++count;

	if (input[index - 1] == ' ')
		--count;

	cout << count << endl;

	return 0;
}
//8	1152	단어의 개수
//단어의 개수를 구하는 문제
