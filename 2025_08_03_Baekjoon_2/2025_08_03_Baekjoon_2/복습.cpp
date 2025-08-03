#include <iostream>

using namespace std;

int partition(int* pArr, int left, int right)
{
	int low{}, high{};
	int pivot = pArr[left];
	low = left + 1;
	high = right;

	while (low <= high)
	{
		while (low <= right && pArr[low] < pivot)
			low++;

		while (high > left && pArr[high] > pivot)
			--high;

		if (low <= high)
		{
			int temp = pArr[low];
			pArr[low] = pArr[high];
			pArr[high] = temp;
			++low;
			--high;
		}
	}

	int temp = pArr[left];
	pArr[left] = pArr[high];
	pArr[high] = temp;

	return high;
}

void QuickSort(int* pArr, int start, int length)
{
	if (start < length)
	{
		int pivot = partition(pArr, start, length);
		QuickSort(pArr, start, pivot - 1);
		QuickSort(pArr, pivot + 1, length);
	}
}


int main(void)
{
	//¹öºí
	int Arr[7] = { 5, 2, 3, 1 ,4, 6, 9 };

	int count = 7;

	QuickSort(Arr, 0, count - 1);

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


	//»ðÀÔ

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
		cout << Arr[i] << '\n';


	return 0;
}