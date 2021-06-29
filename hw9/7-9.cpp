#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	long long int t, a, b, x, y, n;
	long long int mult1, mult2;
	cin >> t;
	while (t-- > 0) {
		mult1 = mult2 = 0;
		cin >> a >> b >> x >> y >> n;
		long long int a1 = a;
		long long int b1 = b;
		long long int k1 = a - x;
		long long int k2 = b - y;
		if (n > k1) {
			a1 = x;
			if (n <= k1 + k2) b1 -= n - k1;
			else b1 = y;
		}
		else if (n <= k1) {
			a1 -= n;
		}
		mult1 = a1 * b1;
		if (n > k2) {
			if (n <= k1 + k2)a -= n - k2;
			else  a = x;
			b = y;
		}
		else if (n <= k2) {
			b -= n;
		}
		mult2 = a * b;
		cout << min(mult1, mult2) << endl;

	}
}
