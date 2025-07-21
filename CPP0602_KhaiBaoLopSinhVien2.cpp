#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
	private:
		string msv, hoTen, lop, ngaySinh;
		float gpa;
	public:
		friend istream& operator >> (istream& in, SinhVien &a) {
			getline(in, a.hoTen);
			cin >> a.lop;
			cin >> a.ngaySinh;
			cin >> a.gpa;
			a.msv = "B20DCCN001";
			
			string bd = a.ngaySinh;
			if (bd[1] == '/') bd.insert(0, "0");
			if (bd[4] == '/') bd.insert(3, "0");
			a.ngaySinh = bd;
			return in;
		}
		
		friend ostream& operator << (ostream& out, SinhVien &a) {
			cout << a.msv << " " << a.hoTen << " " << a.lop << " " << a.ngaySinh << " ";
			cout << fixed << setprecision(2) << a.gpa;
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
Nguyen Hoa Binh
D20CQCN04-B
2/2/2002
2
*/

