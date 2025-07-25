#include <bits/stdc++.h>
using namespace std;

typedef struct NhanVien {
	string ma, ten, gt, ns, dc, mst, nk;
} Nv;

static int dem = 1;

void nhap(Nv &a) {
	cin >> ws;
	getline(cin, a.ten);
	cin >> a.gt >> a.ns;
	cin.ignore();
	getline(cin, a.dc);
	cin >> a.mst >> a.nk;
	stringstream ss;
	ss << setw(5) << setfill('0') << dem++;
	a.ma = ss.str();
} 

bool cmp(Nv a, Nv b) {
	string bd1 = a.ns.substr(6, 4) + a.ns.substr(0, 2) + a.ns.substr(3, 2);
	string bd2 = b.ns.substr(6, 4) + b.ns.substr(0, 2) + b.ns.substr(3, 2);
	return bd1 < bd2;
}

void sapxep(Nv a[], int n) {
	sort(a, a + n, cmp);
}

void inds(Nv a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i].ma << " " << a[i].ten << " " << a[i].gt << " " << a[i].ns << " " << a[i].dc << " " << a[i].mst << " " << a[i].nk << endl;
	}
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}

/*
3
Nguyen Van A
Nam
10/22/1982
Mo Lao-Ha Dong-Ha Noi
8333012345
31/12/2013
Ly Thi B
Nu
10/15/1988
Mo Lao-Ha Dong-Ha Noi
8333012346
22/08/2011
Hoang Thi C
Nu
04/02/1981
Mo Lao-Ha Dong-Ha Noi
8333012347
22/08/2011
*/

