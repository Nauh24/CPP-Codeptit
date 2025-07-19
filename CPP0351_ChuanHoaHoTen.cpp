#include <bits/stdc++.h>
using namespace std;

void chuanHoa(string &s) {
	s[0] = toupper(s[0]);
	for (int i = 1; i < s.size(); i++) {
		s[i] = tolower(s[i]);
	}
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		int n;
		cin>>n;
		cin.ignore();
		string s;
		getline(cin, s);
		string word;
		stringstream ss(s);
		vector<string> v;
		while(ss >> word) {
			chuanHoa(word);
			v.push_back(word);
		}
		if (n == 1) {
			cout<<v.back()<<" ";
			for (int i = 0; i < v.size() - 1; i++) {
				cout<<v[i]<<" ";
			}
		}
		else {
			for (int i = 1; i < v.size(); i++) {
				cout<<v[i]<<" ";
			}
			cout<<v[0];
		}
		cout<<endl;
	}
}

/*
2
1
NguyeN    vAn    Nam
2
hoAng  le Nhat THONG chi
*/

