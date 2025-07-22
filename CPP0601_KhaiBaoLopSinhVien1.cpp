#include <bits/stdc++.h>
using namespace std;

class SinhVien {
	private:
		string msv, hoTen, lop, ngaySinh;
		float gpa;
	public: 
		void nhap() {
			getline(cin, hoTen);
			cin>>lop;
			cin>>ngaySinh;
			cin>>gpa;
			
			msv = "B20DCCN001";
		}
		
		void chuanHoaNgaySinh() {
			if (ngaySinh[1] == '/') ngaySinh.insert(0, "0");
			if (ngaySinh[4] == '/') ngaySinh.insert(3, "0");
		}
		
		void xuat() {
			chuanHoaNgaySinh();
			cout<< msv << " " << hoTen << " " << lop << " " << ngaySinh << " ";
			cout<<fixed<<setprecision(2)<<gpa;
		}		
};



int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}

/*
Nguyen Van A
D20CQCN04-B
2/2/2002
2
*/

