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
//1	27866	���ڿ� ���ڿ�	
//���ڿ��� �Է¹ް� ���ڿ��� Ư�� ��ġ�� �о� ���ô�.