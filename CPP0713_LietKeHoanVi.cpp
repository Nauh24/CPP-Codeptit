#include<bits/stdc++.h>
using namespace std;
int n;
int a[21], used[21];

void Try(int i) {
	for (int j = 1; j <= n; j++) {
		if (!used[j]) {
			a[i] = j;
			used[j] = 1;
			if (i == n) {
				for (int x = 1; x <= n; x++) {
					cout << a[x];
				}
				cout << " ";
			}
			else Try(i + 1);
			used[j] = 0;
		}
	}
} 

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
//		for (int i = 1; i <= n; i++) {
//			a[i] = i;
//		}
		memset(used, 0, sizeof(used));
		Try(1);
		cout<<endl;
	}
}
