#include <iostream>
#include "num_dig.h"
#include "numbers.h"

using namespace std;

int main() {
	int a,b;
	cin >> a;
	cout << numbers(num_dig(a)) << endl;
	return 0;
}
