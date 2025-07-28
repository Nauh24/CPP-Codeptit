#include <bits/stdc++.h>
using namespace std;

int n, k, a[21];

//n - k = 2 
void Try(int i) {
	//phan tu dang xet chay tu so lon hon phan tu truoc do den n - k + i
	for (int j = a[i - 1] + 1; j <= n - k + i; j++) { 
		a[i] = j; // gan tung phan tu cua bo so tiep theo 
		if (i == k) {  // neu dat do dai cua to hop thi in ra
			for (int x = 1; x <= k; x++) {
				cout << a[x];  
			}
			cout << " ";
		}
		else Try(i + 1);   // duyet tiêp den bo so tiep theo
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		n, k;
		cin >> n >> k;
		Try(1);
		cout<< endl;
	}
}

/*

*/

