#include <iostream>

using namespace std;

int main(void)
{
	int N{};
	int k{};

	cin >> N >> k;

	int* Arr = new int[N]{};

	for (int i = 0; i < N; ++i)
		cin >> Arr[i];

	for (int i = 1; i < N; i++) // 첫 시작은 2번째부터니 배열 인덱스 a[1]번부터 시작
	{
		int key = Arr[i];      // 삽입할 값
		int j = i - 1;

		// key보다 큰 값은 오른쪽으로 한 칸씩 이동
		while (j >= 0 && Arr[j] < key) {
			Arr[j + 1] = Arr[j];  //한칸씩 밀고 key값을 넣어줄 대상의 위치를 대비해서 이렇게함
			j--; 
		}

		Arr[j + 1] = key;  // key 삽입
	}
	//쉽게 생각해서 바깥쪽이U 안족이 S

	cout << Arr[k - 1] << endl;

	delete[] Arr;

	return 0;
}
//삽입정렬 공부 겸 테스트 중