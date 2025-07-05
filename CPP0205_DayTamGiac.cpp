#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int a[n];
		int max = INT_MIN;
		for (int i = 0; i < n;i++) {
			cin>>a[i];
			if (a[i] > max) max = a[i];
		}
		
		cout<<max;
		cout<<endl;
	}
}

/*
1
5
1 2 7 4 3
*/

