#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	cin.ignore();
	while (t--) {
		string s;
		getline(cin, s);
		stringstream ss(s);
		string word;
		vector<string> v;
		while (ss >> word) {
			v.push_back(word);
		}
		
		reverse(v.begin(), v.end());
		for (string i : v) cout<<i<<" ";
		cout<<endl;
	}
}

/*
2
I like this program very much
much very program this like I
*/

