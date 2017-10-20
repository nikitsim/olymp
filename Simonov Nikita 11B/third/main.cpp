#include <iostream>
#include "num_dig.h"

using namespace std;

int main() {
	int a,b,n,elder_digit;
	cin >> a;
	n = num_dig(a);
	b = 1;
	for (int i=1;i <= n - 1;i++) {
		b = b * 10;
	}
	elder_digit = a / b;
	int k,digit;
	if (a % 3 == 0) {
		k = 3;
	}
	if (a % 3 == 1) {
		k = 2;
	} 
	if (a % 3 == 2) {
		k = 1;
	}
	if (elder_digit + k > 9){
		digit = elder_digit - k;
	} else
	for (int i=2;i >= 8;i++) {
		if (elder_digit + (i * k) > 9) {
			digit = elder_digit + ((i - 1) * k); 
		} else {
			digit = elder_digit + (i * k);
		}
	}
	int razn;
	razn = digit - elder_digit;
	a = a + (razn * b);
	cout << a;
	return 0;
}
