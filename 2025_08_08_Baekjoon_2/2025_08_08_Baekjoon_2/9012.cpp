#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
	int T{};
	cin >> T;


	for (int i = 0; i < T; ++i)
	{
		stack<char> stack{};

		string str;
		cin >> str;
		int count = 0;
		while (str[count] != '\0')
		{
			if (str[count] == '(')
				stack.push(str[count]);
			else 
			{
				if (!stack.empty())
					stack.pop();
				else
				{
					stack.push(str[count]);
					break;
				}
			}

			++count;
		}

		if (!stack.empty())
			cout << "NO" << '\n';
		else
			cout << "YES" << '\n';
	}

	return 0;
}