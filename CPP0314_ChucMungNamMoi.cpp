#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	cin.ignore();
	set<string> set;
	for (int i = 0; i < n; i++) {
		string s;
		getline(cin, s);
		set.insert(s);
	}
	cout<<set.size();
}

/*
4
CHUC MUNG NAM MOI
HAPPY NEW YEAR
CHUC MUNG TUOI MOI
CHUC MUNG NAM MOI
*/

