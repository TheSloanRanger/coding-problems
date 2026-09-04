#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
	string n;
	int count = 0;
	cin >> n;

	for (int x = 0; x < n.length(); x++) {
		if (n[x] == '4' or n[x] == '7') {
			count += 1;
		}
	}
 
	if (count == 4 or count == 7) {
		cout << "YES";
	}
 
	else {
		cout << "NO";
	}
 
}