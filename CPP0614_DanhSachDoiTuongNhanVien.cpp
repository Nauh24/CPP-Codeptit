#include <bits/stdc++.h>
using namespace std;

typedef class NhanVien {
	friend istream& operator >> (istream& in, NhanVien &a);
	friend ostream& operator << (ostream& out, NhanVien a);
private:
	string ma, ten, gt, ns, dc, mst, nk;
public:
	static int dem;
} Nv;

int Nv::dem = 1;

istream& operator >> (istream& in, NhanVien &a) {
	in >> ws;
	getline(in, a.ten);
	in >> a.gt;
	in >> a.ns;
	in.ignore();
	getline(in, a.dc);
	in >> a.mst >> a.nk;
	stringstream ss;
	ss << setw(5) << setfill('0') << Nv::dem++;
	a.ma = ss.str();
	return in;
}

ostream& operator << (ostream& out, NhanVien a) {
	out << a.ma << " " << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.nk << endl;
	return out;	
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}

/*

*/

