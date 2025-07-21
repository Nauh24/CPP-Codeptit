#include <bits/stdc++.h>
using namespace std;

struct MatHang {
	int ma;
	string ten, nhom;
	double giaMua, giaBan, loiNhuan;
};

bool cmp(MatHang &a, MatHang &b) {
	return a.loiNhuan > b.loiNhuan;
}

int main() {
	int n;
	cin>>n;
	vector<MatHang> a(n);
	for (int i = 0; i < n; i++) {
		cin.ignore();
		getline(cin, a[i].ten);
		getline(cin, a[i].nhom);
		cin >> a[i].giaMua;
		cin >> a[i].giaBan;
		a[i].ma = i + 1;
		a[i].loiNhuan = a[i].giaBan - a[i].giaMua;
	}
	
	sort(a.begin(), a.end(), cmp);
	
	for (auto mh : a) {
		cout << mh.ma << " " << mh. ten << " " << mh. nhom << " ";
		cout << fixed << setprecision(2) << mh.loiNhuan;
		cout<<endl;
	}
}

/*
3
May tinh SONY VAIO
Dien tu
16400
17699
Tu lanh Side by Side
Dien lanh
18300
25999
Banh Chocopie
Tieu dung
27.5
37
*/

