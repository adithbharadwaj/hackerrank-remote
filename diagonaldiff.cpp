#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

int n;
cin >> n;

int d1 = 0, d2 = 0;

int a[n][n];

for(int i = 0; i < n; i++){
	for(int j = 0; j < n; j++){
		cin >> a[i][j];
	}
}

for(int i = 0; i < n; i++){
     d1 += a[i][i];
}


for(int i = 0; i < n; i++){
	d2 += a[i][n - i - 1];
}

cout << abs(d2 - d1) << endl;

	return 0;
}