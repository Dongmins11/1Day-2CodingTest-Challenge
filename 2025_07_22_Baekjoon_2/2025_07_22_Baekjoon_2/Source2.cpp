#include <iostream>

using namespace std;

int main(void)
{
	int N;
	cin >> N;

	int room = 1;
	int layer = 1; // 층 수 (지나간 방 수)

	while (N > room) {
		room += 6 * layer; // 다음 층의 마지막 번호
		++layer;
	}
	cout << layer << '\n';

	return 0; 
}