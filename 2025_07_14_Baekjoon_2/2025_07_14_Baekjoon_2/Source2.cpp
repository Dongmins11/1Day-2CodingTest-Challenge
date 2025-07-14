#include <iostream>
#include <cstring>
using namespace std;
int n, m = 0, i, j, b;
int k;
char ss[1001];


int main() {
	cin >> b;
	for (i = 0; i < b; i++) {
		cin >> ss;
		k = strlen(ss);
		cout << ss[0] << ss[k - 1] << endl;

	}

	return 0;
}
//3	9086 문자열
//문...제