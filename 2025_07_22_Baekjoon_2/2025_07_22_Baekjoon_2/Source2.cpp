#include <iostream>

using namespace std;

int main(void)
{
	int N;
	cin >> N;

	int room = 1;
	int layer = 1; // �� �� (������ �� ��)

	while (N > room) {
		room += 6 * layer; // ���� ���� ������ ��ȣ
		++layer;
	}
	cout << layer << '\n';

	return 0; 
}