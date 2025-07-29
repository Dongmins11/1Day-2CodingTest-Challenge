#include <iostream>

using namespace std;

int main(void)
{
	int input{};
	cin >> input;
	cout << input << endl << 1 << endl;
	return 0;
}
//차수를 구하는 문제

//상황	            일의 양		수학 표현	(다항식 형태)	차수
//항상1번만 함		1			n ^ 0						0
//n번 반복함		n			n ^ 1						1
//n * n번 반복함	n * n		n ^ 2						2

