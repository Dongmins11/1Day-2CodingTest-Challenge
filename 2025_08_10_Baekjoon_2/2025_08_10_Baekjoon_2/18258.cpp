#include <iostream>
#include <string>

using namespace std;

class MyQueue
{
public:
	MyQueue(int Size) : count(Size + 1), Arr(new int[Size + 1]), front(0), rear(0){}
	~MyQueue() { delete[] Arr;}

	void Enqueue(int Value){
		if (isFull())
			return;

		rear = (rear + 1) % count;
		Arr[rear] = Value;
	};
	int Dequeue() {
		if (isEmpty())
			return -1;

		front = (front + 1) % count;
		return Arr[front];
	};

	bool isFull()
	{
		return front == ((rear + 1) % count);
	}

	int isEmpty()
	{
		return front == rear;
	}

	int Size()
	{
		if (front > rear)
			return rear + count - front;

		return rear - front;
	}

	int Front()
	{
		if (isEmpty())
			return -1;

		return Arr[(front + 1) % count];
	}

	int Back() 
	{
		if (isEmpty())
			return -1;

		return Arr[rear];
	}

private:
	int* Arr = nullptr;
	int count;
	int front;
	int rear;
};

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N{};
	int Num{};
	string input;

	cin >> N;
	MyQueue queue = MyQueue(N);

	for (int i = 0; i < N; ++i)
	{
		cin >> input;

		if (input == "push")
		{
			cin >> Num;
			queue.Enqueue(Num);
		}
		else if (input == "pop")
			cout << queue.Dequeue() << '\n';
		else if (input == "size")
			cout << queue.Size() << '\n';
		else if (input == "empty")
			cout << queue.isEmpty() << '\n';
		else if (input == "front")
			cout << queue.Front() << '\n';
		else if (input == "back")
			cout << queue.Back() << '\n';
	}


	return 0;
}