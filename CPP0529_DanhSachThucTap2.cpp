#include <bits/stdc++.h>
using namespace std;

static int dem = 1;

typedef struct SinhVien {
	int stt;
	string msv, ten, lop, email, cty;
} Sv;

void nhap(Sv &a) {
	getline(cin, a.msv);
	getline(cin, a.ten);
	getline(cin, a.lop);
	getline(cin, a.email);
	getline(cin, a.cty);
	a.stt = dem++;
}

void xuat(Sv a) {
	cout << a.stt << " " << a.msv << " " << a.ten << " " << a.lop << " " << a.email << " " << a.cty;
	cout << endl;
}

bool cmp(Sv a, Sv b) {
	return a.msv < b.msv;
}

int main() {
	int n;
	cin >> n;
	cin.ignore();
	SinhVien a[n];
	for (int i = 0; i < n; i++) {
		nhap(a[i]);
	}
	sort(a, a + n, cmp);
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		string cty;
		cin >> cty;
		for (int j = 0; j < n; j++) {
			if (a[j].cty == cty) xuat(a[j]);
		}
	}
}

/*
6
B17DCCN016 
Le Khac Tuan Anh 
D17HTTT2   
test1@stu.ptit.edu.vn
VIETTEL
B17DCCN107 
Dao Thanh Dat    
D17CNPM5   
test2@stu.ptit.edu.vn
FPT
B17DCAT092 
Cao Danh Huy     
D17CQAT04-B
test3@stu.ptit.edu.vn
FPT
B17DCCN388 
Cao Sy Hai Long  
D17CNPM2   
test4@stu.ptit.edu.vn
VNPT
B17DCCN461 
Dinh Quang Nghia 
D17CNPM2   
test5@stu.ptit.edu.vn
FPT
B17DCCN554 
Bui Xuan Thai    
D17CNPM1   
test6@stu.ptit.edu.vn
GAMELOFT
1
FPT
*/

