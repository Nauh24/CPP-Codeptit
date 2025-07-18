#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		//ABCDEAABC
		map<char,int> map;
		for (char i : s) {
			//i = 'A' -> map['A'] = 1
			//i = 'B' -> map['B'] = 1
			//i = 'C' -> map['C'] = 1
			//i = 'D' -> map['D'] = 1
			//i = 'E' -> map['E'] = 1
			//i = 'A' -> map['A'] = 2
			//i = 'A' -> map['A'] = 3
			//i = 'B' -> map['B'] = 2
			//i = 'C' -> map['C'] = 2
 			map[i]++;
		}
		
		for (char i : s) {
			if (map[i] ==  1) cout<<i;
			// map['A'] = 3 -> khong hien thi A
			//...
			// map['D'] = 1 -> hien thi D
			// map['E'] = 1 -> hien thi E
			//...
		}
		cout<<endl;
	}
}

/*
2
ABCDEAABC
ABC
*/

