#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N;
    if (cin >> N) {
        cout << N * (N - 1) << '\n';
    }
    return 0;
}