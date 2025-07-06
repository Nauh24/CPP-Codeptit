#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> v) {
	int n = v.size();
	int odd = 0, even = 0;
	for (int i : v) {
		if (i % 2 == 0) odd++;
		else even++;
	}
	if  ((n % 2 == 0 && odd > even) || (n % 2 != 0 && even > odd)) return true;
	else return false;
}

int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--) {
		string s;
		getline(cin, s);
		vector<int> v;
		stringstream ss(s);
		int x;
		while (ss >> x) {
			v.push_back(x);
		}		
		if (check(v)) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}

/*
2
11 22 33 44 55 66 77
23 34 45 56 67 78 89 90 121 131 141 151 161 171
*/

