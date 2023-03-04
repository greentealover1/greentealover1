#include <iostream>
using namespace std;
int main() {
	int n, a;
	cin >> n;//정수 개수 입력
	int min = 1000001;
	int max = -1000001;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (min > a) min = a;
		if (max < a) max = a;
	}
	cout << min << ' ' << max << endl;
}