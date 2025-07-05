#include <bits/stdc++.h>
using namespace std;

bool isBalanced(int num) {
	string s = to_string(num);
	int even = 0, odd = 0;
	for (char c: s) {
		if ((c - '0') % 2 == 0) even++;
		else odd++;
	}
	return even == odd;
}
int main() {
	int n;
	cin>>n;
	int start = pow(10, n - 1);
	int end = pow(10, n) - 1;
	int cnt = 0;
	for (int i = start; i <= end; i++) {
		if(isBalanced(i)) {
			cout << i << " ";
			cnt++;
			if (cnt % 10 == 0) cout<<endl;
		}
	}
}

