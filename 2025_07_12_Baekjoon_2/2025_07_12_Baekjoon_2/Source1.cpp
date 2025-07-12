#include <iostream>

using namespace std;

int partition(int* arr, int left, int right)
{
	int low = left + 1;
	int high = right;
	int pivot = left;

	while (low <= high)
	{
		while (low <= right && arr[low] < arr[pivot])
			++low;

		while (high > left && arr[high] > arr[pivot])
			--high;

		if (low <= high)
		{
			int temp = 0;
			temp = arr[low];
			arr[low] = arr[high];
			arr[high] = temp;
			++low;
			--high;
		}
	}

	int temp = 0;
	temp = arr[pivot];
	arr[pivot] = arr[high];
	arr[high] = temp;

	return high;
}

void QuickSort(int* arr, int left, int right)
{
	if (left < right)
	{
		int pivot = partition(arr, left, right);
		QuickSort(arr, left, pivot - 1);
		QuickSort(arr, pivot + 1, right);
	}
}

int main(void)
{
	int input1, input2 = 0;
	int lowValue = 0;

	cin >> input1 >> input2;

	int* arr = new int[input1];

	for (int i = 0; i < input1; ++i)
		cin >> arr[i];

	//QuickSort(arr, 0, input1 - 1);

	for (int i = 0; i < input1; ++i)
	{
		if(arr[i] < input2)
			cout << arr[i] << " ";
	}

	cout << endl;

	delete[] arr;

	return 0;
}
//2	10871	X보다 작은 수
//배열을 입력받고 X보다 작은 수를 찾는 문제

//ps. 단순 작은 수 출력이였슴 ㅋㅋ 정렬해서 작은수 순서대로인줄
