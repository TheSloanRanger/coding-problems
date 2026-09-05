#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
	int a, b;
	cin >> a >> b;
 
	for (int x = 1; x < 10000; x++) {
		a = a*3;
		b = b*2;
 
		if (a > b) {
			cout << x;
			break;
		}
 
		else if (a <= b) {
			continue;
		}
	}
 
}