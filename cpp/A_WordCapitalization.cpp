#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ld long double
#define pb push_back
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string word;
    cin >> word;

    if (word[0] >= 97) {
    	word[0] = word[0] - 32;
    }

    cout << word;

}