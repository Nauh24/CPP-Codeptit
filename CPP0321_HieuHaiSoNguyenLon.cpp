#include <bits/stdc++.h>
using namespace std;

string subtract(string a, string b) {
	//a = "12977"
	//b = "978"
	while (b.length() < a.length()) b = "0" + b;
	//b = "00978"
	string res = "";  //luu ket qua a - b
	int nho = 0;  //luu gia tri nho
	for (int i = a.length() - 1; i >= 0; i--) {
		int d1 = a[i] - '0';   
		int d2 = b[i] - '0' + nho;
		if (d1 < d2) {
			d1 += 10;
			nho = 1;
		}
		else {
			nho = 0;
		}
		res = char(d1 - d2 + '0') + res;
		// i = 4 : d1 = '7' - '0' + 10 = 17 (do phai thuc hien lenh if) ; d2 = '8' - '0' = 8, nho = 1  -> res = (17 - 8 + '0')  + "" = '9' + "" = "9" 
		// i = 3 : d1 = '7' - '0' + 10 = 17 (do phai thuc hien lenh if); d2 = '7' - '0' + 1 = 8, nho = 1 -> res = (17 - 8 + '0') + "9" = '9' + "9" = "99"
		// ...
		//res = "11999"
	}
	return res;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		string x, y;
		cin>>x>>y;
		if (x.size() < y.size() || (x.size() == y.size() && x < y)) {
			swap(x, y);
		}
		cout<<subtract(x, y);
		cout<<endl;
	}
}

/*

*/

