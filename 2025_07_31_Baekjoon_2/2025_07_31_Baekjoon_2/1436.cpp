#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int N{};
	int num = 666;
	int count = 0;
	cin >> N;

	while (true)
	{
		string finderValue = to_string(num);

		if (finderValue.find("666") != string::npos)
		{
			++count;
			if (count == N)
				break;
		}
		++num;
	}

	cout << num << endl;
	return 0;
}
//�ٽ� ������ 1436 666���� ����