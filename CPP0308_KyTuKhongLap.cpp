#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		map<char,int> map;
		for (char i : s) {
			map[i]++;
		}
		
		for (char i : s) {
			if (map[i] ==  1) cout<<i;
		}
		cout<<endl;
	}
}

/*

*/

