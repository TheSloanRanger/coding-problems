#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ld long double
#define pb push_back
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    int capital = 0, lower = 0;
 
    cin >> s;
 
    for (int x = 0; x < s.length(); x++) {
    	if (s[x] < 97) {
    		capital += 1;
    	}
 
    	else if (s[x] > 96) {
    		lower += 1;
    	}
 
    }
 
    for (int x = 0; x < s.length(); x++) {
    	if (s[x] < 97 and capital < lower) {
    		s[x] = s[x] + 32;
    	}
 
    	else if (s[x] > 96 and lower < capital) {
    		s[x] = s[x] - 32;
    	}
 
    	else if (s[x] < 97 and lower == capital) {
    		s[x] = s[x] + 32;
    	}

    }
 
    for (int x = 0; x < s.length(); x++) {
    	cout << s[x];
    }
}