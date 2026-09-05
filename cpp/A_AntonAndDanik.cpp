#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ld long double
#define pb push_back
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int anton_count = 0, danik_count = 0;
    string s;
 
    cin >> n >> s;
 
    for (int x = 0; x < s.length(); x++) {
    	if (s[x] == 'A') {
    		anton_count += 1;
    	}
 
    	else if (s[x] == 'D') {
    		danik_count += 1;
    	}
    }

    if (danik_count > anton_count) {
    	cout << "Danik";
    }
 
    else if (anton_count > danik_count) {
    	cout << "Anton";
    }
 
    else if (anton_count == danik_count) {
    	cout << "Friendship";
    }

}
