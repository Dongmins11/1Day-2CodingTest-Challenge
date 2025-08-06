#include <iostream>
#include <set>

using namespace std;

int main(void)
{
    string input{};
    set<string> set{};

	cin >> input;


    for (int i = 0; i < input.size(); ++i) {
        string temp = "";
        for (int j = i; j < input.size(); ++j) {
            temp += input[j];
            set.insert(temp);
        }
    }

    cout << set.size() << '\n';

	return 0;
}