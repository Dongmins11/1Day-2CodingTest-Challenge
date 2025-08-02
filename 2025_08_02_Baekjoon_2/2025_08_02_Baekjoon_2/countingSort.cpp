#include <iostream>

using namespace std;

const int Max = 10001;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	int countMax[Max]{};

	int N{};
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		int num{};
		cin >> num;

		countMax[num]++;
	}


	for (int i = 1; i < Max; ++i)
	{
		//0이라면 조건에 false고 0이아니면 참이니까 계속 출력해줌 같은수를
		//왜냐면 위에서 같은 방에있는 숫자를 ++해줬으니
		//이건 방번호를 출력해주는 것
		while (countMax[i]--)
			cout << i << '\n';
	}


	return 0;
}

//입력값은 좁지만 입력 개수가 많을때

//예 입력값 10000이 최대
//하지만 갯수는 많음 100000000개