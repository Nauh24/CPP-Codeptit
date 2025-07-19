#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	cin.ignore();
	map<string, int> map;
	while (n--) {
		string s;
		getline(cin, s);
		string word;
		stringstream ss(s);
		
		vector<string> v;
		while (ss >> word) {
			for (char &i : word) i = tolower(i);
			v.push_back(word); 
		}
		string res = v.back();
		for (int i = 0; i < v.size() - 1; i++) {
			res += v[i][0];
		}
	
		map[res]++;
		if (map[res] > 1) {
			res += to_string(map[res]);
		}
		string email = res + "@ptit.edu.vn";
		cout<<email;
		cout<<endl; 
	}
}

/*
4
    nGUYEn    quaNG   vInH  
   tRan   thi THU    huOnG
   nGO   quoC  VINH
 lE            tuAn    aNH
*/

