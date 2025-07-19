#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
		string s;
		cin>>s;
		int i = s.size() - 2;
		string res = "";
		while (i >= 0) {
			if (s[i] > s[i + 1]) {
				int k = s.size() - 1;
				for (int j = s.size() - 1; j >= i + 1; j--) {
					if (s[j] < s[i]) {
						k = j;
						break;
					}
				}
				while(s[k] == s[k - 1]) k--;
				swap(s[i], s[k]);
				res = s;
				break;
			}
			i--;
		}
		
		if (i == -1 || s[0] == '0') cout<<-1;
		else cout<<res;
		cout<<endl;
	}
}

/*

*/

