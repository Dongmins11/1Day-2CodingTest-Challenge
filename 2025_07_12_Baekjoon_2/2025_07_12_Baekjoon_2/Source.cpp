#include<iostream>

using namespace std;

int main(void)
{
	int input = 0;
	int findValue = 0;
	int answer = 0;

	cin >> input;
	int* arr = new int[input];

	for (int i = 0; i < input; ++i)
	{
		cin >> arr[i];
	}

	cin >> findValue;

	for (int i = 0; i < input; ++i)
	{
		if (findValue == arr[i])
			++answer;
	}

	cout << answer << endl;

	delete[] arr;

	return 0;
}



//1	10807	개수 세기
//배열을 입력받고 v를 찾는 문제