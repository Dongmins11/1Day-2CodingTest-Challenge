#include <iostream>
#include <cstring>

//배열로 스택 만들어보깅~

using namespace std;

class MyStack
{
public:
	MyStack(int Size = 5) : top(-1), count(Size), Arr(new int[count]) {}
	~MyStack() { delete[] Arr; };
	
	bool IsPull() 
	{
		return top >= count -1;
	}

	bool IsEmpty()
	{
		return top == -1;
	}

	void Push(int _Value)
	{
		if (IsPull())
		{
			int newLength = count + (int)(count * 0.5);
			int* newArr = new int[newLength];
			memcpy(newArr, Arr, sizeof(int) * count);
			delete[] Arr;
			Arr = newArr;
			count = newLength;
		}

		Arr[++top] = _Value;
	}

	int Pop()
	{
		if (IsEmpty())
			return -1;

		int returnValue = Arr[top];
		Arr[top--] = 0;
		return returnValue;
	}

	int Peak()
	{
		if (IsEmpty())
			return -1;

		return Arr[top];
	}

	int Size()
	{
		return top + 1;
	}




private:
	int top;
	int count;
	int* Arr = nullptr;
};

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	MyStack stack = MyStack(10000);
	int N{};
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		int Input{};
		cin >> Input;

		switch (Input)
		{
		case 1:
		{
			int num = 0;
			cin >> num;
			stack.Push(num);
			break;
		}
		case 2:
			cout << stack.Pop() << '\n';
			break;
		case 3:
			cout << stack.Size() << '\n';
			break;
		case 4:
			cout << stack.IsEmpty() << '\n';
			break;
		case 5:
			cout << stack.Peak() << '\n';
			break;
		}
	}

	return 0;
}