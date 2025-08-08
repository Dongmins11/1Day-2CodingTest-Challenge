#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void)
{
	while (true)
	{
		string input;
		getline(cin, input);

		if (0 == input.compare("."))
			break;

		int count = 0;
		
		stack<char> stack;

		bool isVaild = true;

		while (input[count] != '\0')
		{
			if (input[count] == '(')
				stack.push(input[count]);
			else if (input[count] == '[')
				stack.push(input[count]);
			else if(input[count] == ')')
			{
				if (!stack.empty() && stack.top() == '(')
					stack.pop();
				else
				{
					isVaild = false;
					break;
				}
			}
			else if(input[count] == ']')
			{
				if (!stack.empty() && stack.top() == '[')
					stack.pop();
				else
				{
					isVaild = false;
					break;
				}
			}
			++count;
		}

		if (!stack.empty())
			isVaild = false;

		cout << (isVaild ? "yes" : "no") << '\n';

	}

	return 0;
}