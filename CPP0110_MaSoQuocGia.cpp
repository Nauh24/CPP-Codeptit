#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		
		int pos = s.find("084");
		for(int i = 0; i < pos; i++) cout<<s[i];
		for(int i = pos + 3; i < s.size(); i++) cout<<s[i];
		cout<<endl;
	}
}

