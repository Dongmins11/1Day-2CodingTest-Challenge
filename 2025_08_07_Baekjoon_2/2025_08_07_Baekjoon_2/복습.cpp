#include <iostream>

using namespace std;

int partition(int Arr[], int left, int right)
{
	int low = left + 1;
	int high = right;
	int pivot = Arr[left];

	while (low <= high)
	{
		while (low <= right && pivot > Arr[low])
			low++;

		while (left < high && pivot < Arr[high])
			high--;

		if (low <= high)
			swap(Arr[low++], Arr[high--]);
	}

	swap(Arr[left], Arr[high]);

	return high;
}

void QuickSort(int Arr[], int left, int right)
{
	if (left < right)
	{
		int pivot = partition(Arr, left, right);
		QuickSort(Arr, left, pivot - 1);
		QuickSort(Arr, pivot + 1 , right);
	}

}


void swap(int& num1, int& num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

int main(void)
{
	int Arr[7] = { 5, 4, 2, 1, 3, 6, 7 };
	int count = 7;

	QuickSort(Arr, 0, count - 1);

	//for (int i = 0; i < count - 1; ++i)
	//{
	//	for (int j = 0; j < count - 1 - i; ++j)
	//	{
	//		if (Arr[j] > Arr[j + 1])
	//		{
	//			swap(Arr[j], Arr[j + 1]);
	//		}

	//	}
	//}


	//for (int i = 1; i < count; ++i)
	//{
	//	int key = Arr[i];
	//	int j = i - 1;

	//	while (j >= 0 && key < Arr[j])
	//	{
	//		Arr[j + 1] = Arr[j];
	//		--j;
	//	}
	//	Arr[j + 1] = key;
	//}


	for (int i = 0; i < count; ++i)
		cout << Arr[i] << '\n';

	return 0;
}