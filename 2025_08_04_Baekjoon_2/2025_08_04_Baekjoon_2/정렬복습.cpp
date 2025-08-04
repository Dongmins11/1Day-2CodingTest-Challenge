#include <iostream>

using namespace std;

int partition(int Arr[], int left, int right)
{
	int low{}, high{};
	int pivot = Arr[left];
	low = left + 1;
	high = right;

	while (low <= high)
	{
		while (low <= right && pivot > Arr[low])
			low++;

		while (left < high && pivot < Arr[high])
			high--;

		if (low <= high)
		{
			int temp = Arr[low];
			Arr[low] = Arr[high];
			Arr[high] = temp;

		}
	}

	int temp = Arr[left];
	Arr[left] = Arr[high];
	Arr[high] = temp;

	return high;
}

void QuickSort(int Arr[], int left, int right)
{
	if (left < right)
	{
		int pivot = partition(Arr, left, right);
		QuickSort(Arr, left, pivot - 1);
		QuickSort(Arr, pivot + 1, right);
	}
}

int main(void)
{
	int Arr[7] = { 5, 4, 2, 6, 1, 3, 7 };
	int count = 7;

	//퀵정렬
	//QuickSort(Arr, 0, count - 1);




	//버블 정렬
	//for (int i = 0; i < count - 1; ++i)
	//{
	//	for (int j = 0; j < count - 1 - i; ++j)
	//	{
	//		if (Arr[j] > Arr[j + 1])
	//		{
	//			int temp = Arr[j];
	//			Arr[j] = Arr[j + 1];
	//			Arr[j + 1] = temp;
	//		}
	//	}
	//}
	




	//삽입 정렬


	//for (int i = 1; i < count; ++i)
	//{
	//	int key = Arr[i];
	//	int j = i - 1;

	//	while (j >= 0 && key < Arr[j])
	//	{
	//		Arr[j + 1] = Arr[j];
	//		j--;
	//	}
	//	Arr[j + 1] = key;
	//}







	for (int i = 0; i < count; ++i)
		cout << Arr[i];

	cout << '\n';
	return 0;
}