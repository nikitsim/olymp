#include <iostream>

using namespace std;

int main() {
	int n,min,b;
	cin >> n;
	int m[n - 1];
	for (int i = 0;i <= n - 1;i++) {
		cin >> m[i];
	}
	min = m[0] * m[1];
	for (int i = 0;i <= n - 2; i++) {
		for (int k = 2;k <= n - 1;k++) {
			if (i != k) { 
				b = m[i] * m[k];
				if (min > b) {
					min = b;
				}
			}
		}
	}
	cout << min << endl;
	return 0;
}
