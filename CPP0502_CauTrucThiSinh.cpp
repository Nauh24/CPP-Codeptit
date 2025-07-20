#include <bits/stdc++.h>
using namespace std;

struct ThiSinh {
	string hoTen;
	string ngaySinh;
	float diem1, diem2, diem3;
	float tongDiem;
};

void nhap(ThiSinh &a) {
	getline(cin, a.hoTen);
	getline(cin, a.ngaySinh);
	cin >> a.diem1 >> a.diem2 >> a.diem3;
	a.tongDiem = a.diem1 + a.diem2 + a.diem3;
}

void in(ThiSinh a) {
	cout << a.hoTen << " " << a.ngaySinh << " ";
	cout << fixed <<setprecision(1) << a.tongDiem;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}

/*
Nguyen Hoang Ha
11/10/2001
4.5
10.0
5.5
*/

