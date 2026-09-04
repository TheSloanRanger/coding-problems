#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
	int value = 0;
	int n;
	string o;
 
	cin >> n;
 
	string positive = "++X";
	string positive2 = "X++";
	string negative = "--X";
	string negative2 = "X--";

	for (int x = 0; x < n; x++) {
 
		cin >> o;
 
		if (o.compare(positive) == 0 or o.compare(positive2) == 0) {
			value += 1;
		}
 
		else if (o.compare(negative) == 0 or o.compare(negative2) == 0) {
			value -= 1;

		}

	}
 
	cout << value;
 
 
}