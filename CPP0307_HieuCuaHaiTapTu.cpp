#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	cin.ignore();
	while (t--) {
		string s1, s2;
		getline(cin, s1);
		getline(cin, s2);
		
		set<string> set1;
		set<string> set2;
		stringstream ss1(s1);
		stringstream ss2(s2);
		string word1, word2;
		
		while(ss1 >> word1) {
			set1.insert(word1);
		}
		
		while(ss2 >> word2) {
			set2.insert(word2);
		}
		
		for (string i : set1) {
			if (set2.count(i) == 0) cout<<i<<" ";  
		}
		cout<<endl;
	}
}

/*
2
abc ab ab ab abcd
ab abc
aaa xyz ab zzz abc dd dd abc
xyz dd ttt sas cdc
*/

