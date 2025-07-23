#include <bits/stdc++.h>
using namespace std;

typedef struct SinhVien {
	string msv, ten, lop;
	float d1, d2, d3;
} SV;

void nhap(SinhVien &a) {
	cin >> a.msv;
	cin.ignore();
	getline(cin, a.ten);
	cin >> a.lop;
	cin >> a.d1 >> a.d2 >> a.d3;
}

bool cmp (SV a, SV b) {
	return a.msv < b.msv;
}

void sap_xep(SV a[], int n) {
	sort(a, a + n, cmp);
}

void in_ds(SV a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << i + 1 << " " << a[i].msv << " " << a[i].ten << " " << a[i].lop << " ";
		cout << fixed << setprecision(1) << a[i].d1 << " ";
		cout << fixed << setprecision(1) << a[i].d2 << " ";
		cout << fixed << setprecision(1) << a[i].d3;
		cout << endl;
	}
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}

/*
3
B20DCCN999
Nguyen Van An
D20CQCN04-B
10.0
9.0
8.0
B20DCAT001
Le Van Nam
D20CQAT02-B
6.0
6.0
4.0
B20DCCN111
Tran Hoa Binh
D20CQCN04-B
9.0
5.0
6.0
*/

