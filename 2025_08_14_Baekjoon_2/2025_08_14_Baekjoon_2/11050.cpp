#include <iostream>

using namespace std;

int fact(int n) {
    int res = 1;
    for (int i = 1; i <= n; ++i)
        res *= i;
    return res;
}

int main() {
    int N{}, K{};
    cin >> N >> K;

    cout << fact(N) / (fact(K) * fact(N - K)) << '\n';

    return 0;
}