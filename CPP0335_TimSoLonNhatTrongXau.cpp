#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		int maxx = INT_MIN;
		int tmp = 0;
		for (int i = 0; i < s.size(); i++) {
			if (!isdigit(s[i])) {
				maxx = max(maxx, tmp);
				tmp = 0;
			}
			else tmp = tmp * 10 + (s[i] - '0');
		}
		cout<<maxx;
		cout<<endl;
	}
}

/*

*/

