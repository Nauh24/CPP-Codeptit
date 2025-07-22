#include <bits/stdc++.h>
using namespace std;

class SinhVien {
	friend istream& operator >> (istream &in, SinhVien &a);
	friend ostream& operator << (ostream &out, SinhVien a);
private: 
	string msv, hoTen, lop, ngaySinh;
	float gpa;
	
public: 
	SinhVien() {
		msv = "";
		hoTen = "";
		lop = "";
		ngaySinh = "";
		gpa = 0;
	}
	
	static int dem;
	
	void chuanHoaNgaySinh() {
		if (ngaySinh[1] == '/') ngaySinh.insert(0, "0");
		if (ngaySinh[4] == '/') ngaySinh.insert(3, "0");
	}
};

int SinhVien::dem = 1;

istream& operator >> (istream &in, SinhVien &a) {
	in.ignore();
	getline(in, a.hoTen);
	in >> a.lop;
	in >> a.ngaySinh;
	in >> a.gpa;
	a.chuanHoaNgaySinh();
	stringstream ss;
	ss << "B20DCCN" << setw(3) << setfill('0') << SinhVien::dem++;
	a.msv = ss.str();
	return in;
}

ostream& operator << (ostream &out , SinhVien a) {
	out << a.msv << " " << a.hoTen << " " << a.lop << " " << a.ngaySinh << " ";
	out << fixed << setprecision(2) << a.gpa;
	out << endl;
	return out;
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}

/*
1
Nguyen Van An
D20CQCN01-B
2/12/2002
3.19
*/

