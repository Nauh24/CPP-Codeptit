#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		bool check = true;
		for (char c: s) {
			if (c != '0' && c != '6' && c != '8') {
				cout<<"NO";
				check = false;
				break;
			}
		}
		
		if(check) cout<<"YES";
		cout<<endl;
	}
}

