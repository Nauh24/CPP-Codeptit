#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
private:
	string msv, hoTen, lop, ngaySinh;
	float gpa;
	void chuanHoaNgaySinh() {
		if (ngaySinh[1] == '/') ngaySinh.insert(0, "0");
		if (ngaySinh[4] == '/') ngaySinh.insert(3, "0");
	}
	
	void chuanHoaTen() {
		stringstream ss(hoTen);
		string word;
		string res = "";
		while (ss >> word) {
			word[0] = toupper(word[0]);
			for (int i = 1; i < word.size(); i++) {
				word[i] = tolower(word[i]);
			}
			res += word + " ";
		}
		res.pop_back();
		hoTen = res;
	}
	
public:
	SinhVien() {
		msv = "";
		hoTen = "";
		lop = "";
		ngaySinh = "";
		gpa = 0;
	}
	
	friend istream& operator >> (istream &in, SinhVien &a) {
		getline(in, a.hoTen);
		in >> a.lop;
		in >> a.ngaySinh;
		in >> a.gpa;
		a.msv = "B20DCCN001";
		a.chuanHoaTen();
		a.chuanHoaNgaySinh();
		return in;
	}
	
	friend ostream& operator << (ostream &out, SinhVien &a) {
		out << a.msv << " " << a.hoTen << " " << a.lop << " " << a.ngaySinh << " ";
		out << fixed << setprecision(2) << a.gpa;
		return out;
	}
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}

/*
NguyEn hoa BiNH
D20CQCN04-B
2/2/2002
2
*/

