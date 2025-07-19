#include <bits/stdc++.h>
using namespace std;

int main() {
	string line, all = "";
	while (getline(cin, line)) {
//		if (line == "0") break;
		all += line + " ";
	}
//	cout<<all;
	vector<string> v;
	string tmp = "";
	for (char i : all) {
		if (i != '.' && i != '?' && i != '!') {
			tmp += i;
		}
		else {
			v.push_back(tmp);
			tmp = "";
		}
	}
	for (string i : v) {
		stringstream ss(i);
		string word;
		tmp = "";
		while(ss >> word) {
			for (char &j : word) j = tolower(j);
			tmp += word + " ";
		}
		tmp[0] = toupper(tmp[0]);
		cout<<tmp<<endl;
	}
}

/*
ky thi LAP TRINH ICPC PTIT  bat dau to chuc     tu     nam 2010. nhu vay, nam nay la          tron 10 nam!
    vay CO PHAI NAM NAY LA KY THI LAN THU 10?        khong phai! nam nay la KY THI LAN THU 11.
*/

