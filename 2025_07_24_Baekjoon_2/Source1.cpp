#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	while (true)
	{
		int N{};
		int Result{};
	
		cin >> N;

		if (N == -1)
			break;

		vector<int> vec;

		for (int i = 1; i <= N; ++i)
		{
			if (N != i && N % i == 0)
			{
				Result += i;
				vec.emplace_back(i);
			}
		}

		if (Result == N)
		{
			cout << N << " = ";
			for (size_t i = 0; i < vec.size(); ++i)
			{
				cout << vec[i];
				if (i < vec.size() - 1)
					cout << " + ";
			}
			cout << endl;
		}
		else
		{
			cout << N << " is NOT perfect." << endl;
		}
	}


	return 0;
}
//2501 약수 구하기