#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	char answer101[15] = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
	char answer102[15] = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};
	
	while(t--){
		int code;
		cin>>code;
		char ans[15];
		for(int i = 0;i < 15; i++) {
			cin >> ans[i];
		}
		int correct = 0;
		for (int i = 0; i < 15; i++) {
			if ((code == 101 && ans[i] == answer101[i]) || (code == 102 && ans[i] == answer102[i])) correct ++;
		}
		
		cout<< fixed << setprecision(2) << correct * (10.0 / 15);
		cout<<endl;
	}
}

