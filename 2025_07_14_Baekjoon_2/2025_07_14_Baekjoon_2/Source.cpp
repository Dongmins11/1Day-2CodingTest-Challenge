#include <iostream>

using namespace std;

int main(void)
{
	char input[1001]{};
	int index{};
	
	cin >> input;
	cin >> index;
	cout << *(input + index - 1) << endl;
	return 0;
}
//1	27866	문자와 문자열	
//문자열을 입력받고 문자열의 특정 위치를 읽어 봅시다.