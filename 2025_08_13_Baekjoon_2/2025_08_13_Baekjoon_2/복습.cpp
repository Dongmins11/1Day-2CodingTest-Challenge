#include <iostream>

using namespace std;

void swap(int& num1, int& num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

int main(void)
{
	int Arr[7] = { 3, 1, 2, 4, 6, 7, 5 };
	int count = 7;
	
	//for (int i = 0; i < count - 1; ++i)
	//{
	//	for(int j=0; j < count -1 - i; ++j)
	//	{
	//		if (Arr[j] > Arr[j + 1])
	//			swap(Arr[j], Arr[j + 1]);
	//	}
	//}

	for (int i = 1; i < count; ++i)
	{
		int key = Arr[i];
		int j = i - 1;
		
		while (j >= 0 && key < Arr[j])
		{
			Arr[j + 1] = Arr[j];
			j--;
		}
		Arr[j + 1] = key;
	}



	for (int i = 0; i < count; ++i)
		cout << Arr[i] << '\n';

	return 0;
}