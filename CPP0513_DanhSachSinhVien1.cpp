#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
	string hoTen, lop, ngaySinh;
	float gpa;
};

void nhap(SinhVien a[], int n) {
	for (int i = 0; i < n; i++) {
		cin.ignore();
		getline(cin, a[i].hoTen);
		cin>>a[i].lop;
		cin>>a[i].ngaySinh;
		cin>>a[i].gpa;
		string bd = a[i].ngaySinh;
		if (bd[1] == '/') bd.insert(0, "0");
		if (bd[4] == '/') bd.insert(3, "0");
		a[i].ngaySinh = bd;
	}
}

void in(SinhVien a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "B20DCCN" << setw(3) << setfill('0') << i + 1 << " ";
		cout << a[i].hoTen << " " << a[i].lop << " " << a[i].ngaySinh << " ";
		cout << fixed << setprecision(2) << a[i].gpa;
		cout<<endl;
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}

/*
1
Nguyen Van An
D20CQCN01-B
2/12/2002
3.19
*/

