#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
 
	int n;
	int count = 0;
	cin >> n;
	int a, b, c;

	for (int x = 0; x < n; x++) {
		cin >> a >> b >> c;
 
		if (a+b == 2 or a+c == 2 or b+c ==2) {
			count += 1;
		}
	
	}
 
	cout << count;

}