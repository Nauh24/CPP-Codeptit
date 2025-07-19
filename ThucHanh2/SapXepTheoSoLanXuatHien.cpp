#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.second != b.second) return a.second > b.second;
	else return a.first < b.first;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		vector<int> a(n);
		map<int,int> map;
		for(int i = 0; i < n; i++) {
			cin>>a[i];
			map[a[i]]++;
		}
		vector<pair<int, int>> v;
		for (auto it : map) {
			v.push_back({it.first, it.second});
		}
		sort(v.begin(), v.end(), cmp);
		for (auto i : v) {
			for (int j = 0; j < i.second; j++) {
				cout<<i.first<<" ";
			}
		}
		cout<<endl;
	}
}

/*

*/

