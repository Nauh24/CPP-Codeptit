#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--) {
		string s;
		getline(cin,s);
		istringstream iss(s);
		string word;
		int cnt = 0;
		while (iss >> word) {
			cnt++;
		}
		cout<<cnt;
		cout<<endl;
	}
}

/*
2
Print the number of words
Print the number of words present in the string
*/

