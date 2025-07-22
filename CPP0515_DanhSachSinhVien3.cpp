#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
	string msv, hoTen, lop, ngaySinh;
	float gpa;
};

string chuanHoaTen (string s) {
	stringstream ss (s);
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

void nhap (SinhVien a[], int n) {
	for (int i = 0; i < n; i++) {
		cin.ignore();
		getline(cin, a[i].hoTen);
		cin >> a[i].lop >> a[i].ngaySinh >> a[i].gpa;
		stringstream ss;
		ss << "B20DCCN" << setw(3) << setfill('0') << i + 1;
		a[i].msv = ss.str();
		a[i].hoTen = chuanHoaTen(a[i].hoTen);
		a[i].ngaySinh = chuanHoaNgay(a[i].ngaySinh);
	}
}

bool cmp (SinhVien a, SinhVien b) {
	return a.gpa > b.gpa;
}

void sapxep (SinhVien a[], int n) {
	sort(a, a + n, cmp);
}

void in (SinhVien a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i].msv << " ";
		cout << a[i].hoTen << " " << a[i].lop << " " << a[i].ngaySinh << " ";
		cout << fixed << setprecision(2) << a[i].gpa;
		cout << endl;
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}

/*
2
ngUYen Van NaM
D20DCCN01-B
2/12/1994
2.17
Nguyen QuanG hAi
D20DCCN02-B
1/9/1994
3.0
*/

