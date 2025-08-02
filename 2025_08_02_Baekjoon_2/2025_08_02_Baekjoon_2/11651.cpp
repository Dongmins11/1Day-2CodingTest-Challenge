#include <iostream>
#include<algorithm>
#include <vector>

using namespace std;

struct Data {
    int x, y;
};

int main() {
    int N;
    cin >> N;

    vector<Data> arr(N);

    for (int i = 0; i < N; ++i)
        cin >> arr[i].x >> arr[i].y;

    sort(arr.begin(), arr.end(), [](const Data& a, const Data& b) {
        if (a.y == b.y)
            return a.x < b.x;
        return a.y < b.y;
        });

    for (const auto& d : arr)
        cout << d.x << " " << d.y << '\n';

    return 0;
}