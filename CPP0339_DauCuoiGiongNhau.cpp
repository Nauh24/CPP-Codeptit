#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		int a[256] = {0};
		for (char c : s) {
			a[c]++;
		}
		
		int cnt = 0;
		for (int i = 'a'; i <= 'z'; i++) {
			cnt += a[i];
			cnt += a[i] * (a[i] - 1) / 2;
		}
		
		cout<<cnt;
		cout<<endl;
	}
}

/*

*/

