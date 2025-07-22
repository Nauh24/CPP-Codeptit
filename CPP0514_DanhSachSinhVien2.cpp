#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
	string msv, hoTen, lop, ngaySinh;
	float gpa;
};

string chuanHoaTen(string s) {
	stringstream ss(s);
	string word;
	string res = "";
	while (ss >> word) {
		word[0] = toupper(word[0]);
		for (int i = 1; i < word.size(); i++) word[i] = tolower(word[i]);
		res += word + " ";
	} 
	res.pop_back();
	return res;
}

string chuanHoaNgay(string s) {
	if (s[1] == '/') s = "0" + s;
	if (s[4] == '/') s.insert(3, "0");
	return s;
}

void nhap(SinhVien a[], int n) {
	for (int i = 0; i < n; i++) {
		cin.ignore();
		getline(cin, a[i].hoTen);
		cin >> a[i].lop;
		cin >> a[i].ngaySinh;
		cin >> a[i].gpa;
		a[i].hoTen = chuanHoaTen(a[i].hoTen);
		a[i].ngaySinh = chuanHoaNgay(a[i].ngaySinh);
	}
}

void in(SinhVien a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "B20DCCN" << setw(3) << setfill('0') << i + 1 << " ";
		cout << a[i].hoTen << " " << a[i].lop << " " << a[i].ngaySinh << " ";
		cout << fixed << setprecision(2) << a[i].gpa;
		cout <<endl;
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
nGuyEn  vaN    biNH
D20CQCN01-B
2/12/2002
3.1
*/

