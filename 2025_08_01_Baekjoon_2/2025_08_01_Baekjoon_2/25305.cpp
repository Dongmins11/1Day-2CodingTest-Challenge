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

	for (int i = 1; i < N; i++) // ù ������ 2��°���ʹ� �迭 �ε��� a[1]������ ����
	{
		int key = Arr[i];      // ������ ��
		int j = i - 1;

		// key���� ū ���� ���������� �� ĭ�� �̵�
		while (j >= 0 && Arr[j] < key) {
			Arr[j + 1] = Arr[j];  //��ĭ�� �а� key���� �־��� ����� ��ġ�� ����ؼ� �̷�����
			j--; 
		}

		Arr[j + 1] = key;  // key ����
	}
	//���� �����ؼ� �ٱ�����U ������ S

	cout << Arr[k - 1] << endl;

	delete[] Arr;

	return 0;
}
//�������� ���� �� �׽�Ʈ ��