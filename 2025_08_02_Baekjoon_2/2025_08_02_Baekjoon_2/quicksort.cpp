#include <iostream>

using namespace std;

int medianOfThree(int* arr, int left, int right)
{
	int mid = (left + right) / 2;

	// ����: arr[left], arr[mid], arr[right] �� �߰����� mid �ڸ��� �α�
	if (arr[left] > arr[mid])
		swap(arr[left], arr[mid]);
	if (arr[left] > arr[right])
		swap(arr[left], arr[right]);
	if (arr[mid] > arr[right])
		swap(arr[mid], arr[right]);

	// ���� arr[left] <= arr[mid] <= arr[right]

	// �߰����� �ǹ����� ����ϰ�, ��ġ�� ���� ������ �ű�
	swap(arr[mid], arr[left]); // �ǹ��� �������� ������
	return arr[left];
}

int partition(int* Arr, int p, int right)
{
	int low{}, high{};
	int pivot = medianOfThree(Arr, p, right);

	low = p + 1;
	high = right;

	while (low <= high)
	{
		while (low < right && Arr[low] < pivot)
			++low;

		while (high > p && Arr[high] > pivot)
			--high;

		if (low <= high)
		{
			int temp = Arr[low];
			Arr[low] = Arr[high];
			Arr[high] = temp;
			++low;
			--high;
		}
	}

	int temp1 = Arr[high];
	Arr[high] = Arr[p];
	Arr[p] = temp1;

	return high;
}

void Quicksort(int* Arr, int left, int right)
{
	if (left < right)
	{
		int pivot = partition(Arr, left, right);

		Quicksort(Arr, left, pivot - 1);
		Quicksort(Arr, pivot + 1, right);
	}
}


int main(void)
{
	int N{};

	cin >> N;

	int* Arr = new int[N];

	for (int i = 0; i < N; ++i)
		cin >> Arr[i];

	Quicksort(Arr, 0, N - 1);

	for (int i = 0; i < N; ++i)
		cout << Arr[i] << endl;

	delete[] Arr;

	return 0;
}