#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
	int n, m;
	int groups = 0;
	cin >> n;
	int arr[n];
 
	for (int x = 0; x < n; x++) {
		cin >> m;
		arr[x] = m;
	}
 
	for (int x = 0; x < n; x++) {
		if (arr[x] != arr[x+1]) {
			groups += 1;
		}
	}
 
	if (groups == 0) {
		groups = 1;
	}
 
	cout << groups;

}