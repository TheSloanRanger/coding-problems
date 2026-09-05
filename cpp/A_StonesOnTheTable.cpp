#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
	int n;
	string s;
	int count = 0;
 
	cin >> n >> s;
 
	for (int x = 0; x < n; x++) {
		if (s[x] == s[x+1]) {
			count += 1;
		}
	}
 
	cout << count;

}