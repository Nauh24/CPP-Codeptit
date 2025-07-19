#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		ll m;
		cin>>m;
		
		ll tmp = 0;
		for (char i : s) {
			tmp = (tmp * 10 + (i - '0')) % m;
		}
		
		cout<<tmp;
		cout<<endl;
	}
}

/*

*/

