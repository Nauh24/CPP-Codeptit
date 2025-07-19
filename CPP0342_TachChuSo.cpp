#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		string res = "";
		int sum = 0;
		for (char i : s) {
			if (isdigit(i)) sum += (i - '0');
			else res += i;
		}
		sort(res.begin(), res.end());
		res += to_string(sum);
		cout<<res;
		cout<<endl;
	}
}

/*

*/

