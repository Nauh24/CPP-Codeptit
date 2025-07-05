#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	long long f[93] ;
		f[1] = 1;
		f[2] = 1;
	for (int i = 3; i <= 92; i++) {
		f[i] = f[i-1] + f[i-2];
	}
	while(t--) {
		int n;
		cin>>n;
		cout<<f[n];
		
		cout<<endl;
	}
}

