#include <iostream>

using namespace std;

int main() {
	int n,m,a;
	cin >> n >> m;
	a = m % n;
	if (a == 0) {
		a = n;
	}
	cout << a << endl;
	return 0;
}
