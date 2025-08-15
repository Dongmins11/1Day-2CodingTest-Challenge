#include <iostream>

using namespace std;

long long comb(int n, int r) {
    if (r > n) return 0;
    if (r == 0 || r == n) return 1;
    long long res = 1;
    // 조합 반복문 계산: (n * (n-1) * ... * (n-r+1)) / (1 * 2 * ... * r)
    for (int i = 1; i <= r; ++i) {
        res = res * (n - i + 1) / i;
    }
    return res;
}

int main() 
{
    int T{};
    cin >> T;

    for (int i = 0; i < T; ++i)
    {
        int N{}, M{};

        cin >> N >> M;

        cout << comb(M, N) << '\n';
    }
}