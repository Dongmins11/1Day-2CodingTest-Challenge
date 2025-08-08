#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(void)
{
	int N{};
	int minNum = 1;

	stack<int> firstStack;
	queue<int> firstQueue;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		int num{};
		cin >> num;

		firstQueue.push(num);
	}

	while (!firstQueue.empty())
	{
		if (firstQueue.front() == minNum)
		{
			firstQueue.pop();
			++minNum;
		}
		else if (!firstStack.empty() && firstStack.top() == minNum)
		{
			firstStack.pop();
			++minNum;
		}
		else
		{
			firstStack.push(firstQueue.front());
			firstQueue.pop();
		}
	}


	bool isVaild = true;

	while(!firstStack.empty())
	{
		if (firstStack.top() == minNum)
		{
			firstStack.pop();
			++minNum;
		}
		else
		{
			isVaild = false;
			break;
		}
	}

	cout << (isVaild ? "Nice" : "Sad") << '\n';


	return 0;
}