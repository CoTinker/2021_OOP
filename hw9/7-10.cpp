#include <iostream>
using namespace std;
int main() {
	int n, L, t, count = 1;
	int x, d;
	scanf("%d %d %d ", &n, &L, &t);
	for (int i = 0; i < n; ++i) {
		scanf("%d %d", &x, &d);
		switch (d) {
		case 1:x += t; break;
		case 2:x -= t; break;
		}
		if (x > 0 && x < L) count++;
	}
	cout << count << endl;
}
