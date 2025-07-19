#include <bits/stdc++.h>
using namespace std;

string substract(string x, string y) {
	string res = "";
	int n = x.size();
	while (y.size() < n) y = "0" + y;
	int nho = 0;
	for (int i = n - 1; i >= 0; i--) {
		int d1 = x[i] - '0';
		int d2 = y[i] - '0' + nho;
		if (d1 < d2) {
			d1 += 10;
			nho = 1;
		} 
		else nho = 0;
		res = char(d1 - d2 + '0') + res;
	}
	return res;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		string x, y;
		cin>>x>>y;
		if (x.size() < y.size() || (x.size() == y.size() && x < y)) swap(x,y);
		
		cout<<substract(x, y);
		cout<<endl;
	}
}

/*

*/

