#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[100][100];
int X[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int Y[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
void bfs(int i, int j) {
	a[i][j] = 0;
	for (int k = 0; k < 8; k++) {
		int x = i + X[k];
		int y = j + Y[k]; 
		if (x >= 0 && x < n && y >= 0 && y < m && a[x][y] == 1) {
			bfs(x, y);
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n>>m;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> a[i][j];
			}
		}
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (a[i][j] == 1) {
					cnt++;
					bfs(i, j);
				}
			}
		}
		cout<<cnt;
		cout<<endl;
	}
}

/*

*/

