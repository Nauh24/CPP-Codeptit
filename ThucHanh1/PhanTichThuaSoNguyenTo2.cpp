#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			cout<<i<<" ";
			int cnt = 0;
			while (n % i == 0) {
				cnt++;
				n/=i;
			}
			cout<<cnt<<" ";
			cout<<endl;
		}
	}
	if (n > 1) cout<<n<<" "<<1;
}

/*

*/

