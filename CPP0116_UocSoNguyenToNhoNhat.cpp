#include <bits/stdc++.h>
using namespace std;

const int MAX = 10001;
int a[MAX];

void sieve() {
	for (int i = 1; i < MAX; i++) a[i] = i;
	for (int i = 2; i < sqrt(MAX); i++) {
		if (a[i] == i) { // chi xu ly snt
			for (int j = i * i; j < MAX; j+=i) { 
				if (a[j] == j) { //dam bao chi gan uoc nho nhat 1 lan
					a[j] = i;
				}
			}
		}
	} 
}

int main() {
	sieve();
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		for (int i = 1; i <= n; i++) {
			cout<<a[i]<<" ";
		}
		
		cout<<endl;
	}
}

/*

*/

