#include <iostream>

using namespace std;

int main(void)
{
	char* input = new char[101];
	int count = 0;
	cin >> input;

	while (input[count] != '\0')
	{
		++count;
	}

	cout << count << endl;

	delete[] input;

	return 0;
}

//2	2743	단어 길이 재기
//문자열을 입력받고 길이를 재는 문제
