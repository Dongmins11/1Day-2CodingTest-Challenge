#include <iostream>

using namespace std;

void Swap(int& num1, int& num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

int partition(int Arr[], int left, int right)
{
	int low = left + 1;
	int high = right;
	int pivot = Arr[left];

	while (low <= high)
	{
		while (low <= right && Arr[low] < pivot)
			low++;

		while (left < high && Arr[high] > pivot)
			high--;

		if (low <= high)
		{
			Swap(Arr[low], Arr[high]);
			low++;
			high--;
		}
	}

	Swap(Arr[left], Arr[high]);

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
	//bubble sort
	int Arr[7] = { 6, 4, 2, 1, 5, 3, 7 };
	int count = 7;

	QuickSort(Arr, 0, count - 1);

	//for (int i = 0; i < count - 1; ++i)
	//{
	//	for (int j = 0; j < count - 1 - i; ++j)
	//	{
	//		if (Arr[j] > Arr[j + 1])
	//		{
	//			Swap(Arr[j], Arr[j + 1]);
	//		}
	//	}
	//}


	//insert sort
	//for (int i = 1; i < count; ++i)
	//{
	//	int key = Arr[i];
	//	int j = i - 1;

	//	while (j >= 0 && Arr[j] > key)
	//	{
	//		Arr[j + 1] = Arr[j];
	//		--j;
	//	}
	//	Arr[j + 1] = key;
	//}


	for (int i = 0; i < count; ++i)
		cout << Arr[i] << ' ' << '\n';
}