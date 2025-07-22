#include <bits/stdc++.h>
using namespace std;

class GiangVien {
	friend istream& operator >> (istream& in, GiangVien &a);
	friend ostream& operator << (ostream& out, GiangVien a);
private:
	string ma, hoTen, boMon;
public:
	static int dem;
	bool chuaTuKhoa(string key);
};

int GiangVien::dem = 1;

bool GiangVien::chuaTuKhoa(string key) {
	transform(key.begin(), key.end(), key.begin(), ::tolower);
	string ten = hoTen;
	transform(ten.begin(), ten.end(), ten.begin(), ::tolower);
	return ten.find(key) != string::npos;
}

istream& operator >> (istream& in, GiangVien &a) {
	getline(in, a.hoTen);
	getline(in, a.boMon);
	stringstream ss;
	ss << "GV" << setw(2) << setfill('0') << GiangVien::dem++;
	a.ma = ss.str();
	
	stringstream ss2(a.boMon);
	string word;
	string res = "";
	while (ss2 >> word) {
		res += toupper(word[0]);
	}
	a.boMon = res;
	return in;
}

ostream& operator << (ostream& out, GiangVien a) {
	out << a.ma << " " << a.hoTen << " " << a.boMon;
	return out;
}

int main() {
	int n;
	cin>>n;
	cin.ignore();
	GiangVien a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		string key;
		cin>>key;
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " << key << ":" << endl;
		for (int j = 0; j < n; j++) {
			if (a[j].chuaTuKhoa(key)) {
				cout << a[j] << endl;
			}
		}
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
1
aN
*/

