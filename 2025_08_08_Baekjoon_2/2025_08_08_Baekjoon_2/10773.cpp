#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
	stack<int> stack = {};

	int k{};

	cin >> k;

	for (int i = 0; i < k; ++i)
	{
		int num{};
		cin >> num;

		if (!stack.empty() && num == 0)
			stack.pop();
		else
			stack.push(num);
	}

	int result = 0;

	while (!stack.empty())
	{
		result += stack.top();
		stack.pop();
	}


	cout << result << '\n';

	return 0;
}