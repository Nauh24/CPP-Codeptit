#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n;
	cin>>n;
	ll sum = 0;
	ll gt = 1;
	for (int i = 1; i <= n; i++) {
		gt *= i;
		sum += gt; 
	}
	cout<<sum;
}

/*

*/

