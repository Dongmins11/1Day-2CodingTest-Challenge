#include <iostream>
using namespace std;

int main() {
    int a, b, c, n0;
    cin >> a >> b >> c >> n0;

    if (a > c) {
        cout << 0 << endl;
    }
    else {
        long long f = 1LL * a * n0 + b;
        long long g = 1LL * c * n0;
        cout << (f <= g ? 1 : 0) << endl;
    }

    return 0;
}

//이해 못함
//f(n) = a * n + b
//O(n) = c * n


