#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
	int k, n, w;
	int answer;
	int price = 0;
 
	cin >> k >> n >> w;
 
	for (int x = 1; x <= w; x++) {
		price += k*x;
	}
 
	answer = price - n;
 
	if (answer < 0) {
		answer = 0;
	}
 
	cout << answer;
 
}