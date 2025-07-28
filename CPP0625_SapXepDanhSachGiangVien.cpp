#include <bits/stdc++.h>
using namespace std;

class GiangVien {
	friend istream& operator >> (istream& in, GiangVien &a);
	friend ostream& operator << (ostream& out, GiangVien a);
private:
	string ma, ten, boMon;
public:
	static int dem;
	string getTen() {
		stringstream  ss(ten);
		string word;
		vector<string> v;
		while(ss >> word) {
			v.push_back(word);
		}
		return v[v.size() - 1];
	}
	string getBoMon() {
		stringstream ss(boMon);
		string word;
		string res = "";
		while (ss >> word) {
			res += toupper(word[0]);
		}
		return res;
	}
	
	string getMa() {
		return ma;
	}
};

bool cmp(GiangVien a, GiangVien b) {
	if (a.getTen() != b.getTen()) return a.getTen() < b.getTen();
	else return a.getMa() < b.getMa();
}

int GiangVien::dem = 1;

istream& operator >> (istream& in, GiangVien &a) {

	getline(in, a.ten);
	getline(in, a.boMon);
	stringstream ss;
	ss << "GV" << setw(2) << setfill('0') << GiangVien::dem++;
	a.ma = ss.str();
	return in;
}

ostream& operator << (ostream& out, GiangVien a) {
	out << a.ma << " " << a.ten << " " << a.getBoMon();
	out << endl;
	return out;
}

int main() {
	int n;
	cin >> n;
	GiangVien a[n];
	cin >> ws;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	sort(a, a + n, cmp);
	
	for (int i = 0; i < n; i++) {
		cout << a[i];
	}
}

/*
3
Nguyen Manh Son
Cong nghe phan mem
Vu Hoai Nam
Khoa hoc may tinh
Dang Minh Tuan
An toan thong tin
*/

