#include <bits/stdc++.h>
using namespace std;

string addStrings(string a, string b) {
	int n = max(a.size(), b.size());
	if (a.size() < b.size()) swap(a,b); 
	
	while (b.size() != n) {
		b = "0" + b;	
	}
	
	int nho = 0;
	string res = "";
	for (int i = n - 1; i >= 0; i--) {
		int d1 = a[i] - '0';
		int d2 = b[i] - '0';
		int tmp = d1 + d2 + nho;
		if (tmp >= 10) {
			nho = 1;
			tmp -= 10;
		}
		else nho = 0;
		res = char(tmp + '0') + res;
	}
	if (nho == 1) res = "1" + res;
	return res;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		string x, y;
		cin>>x>>y;
		cout<<addStrings(x, y);
		cout<<endl;
	}
}

/*
1
12
198111
*/

