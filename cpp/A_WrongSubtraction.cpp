#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
	int n, k;
	cin >> n >> k;
 
	for (int x = 0; x < k; x++) {
 
		if (n % 10 != 0) {
			n -= 1;
		}
 
		else if (n % 10 == 0) {
			n /= 10;
		}
	}

	cout << n;
}