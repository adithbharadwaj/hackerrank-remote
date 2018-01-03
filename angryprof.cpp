#include<iostream>
#include<algorithm>

using namespace std;

int main(){

int t;
cin >> t;

for(int i = 0; i < t; i++){

int n, m, count = 0;
cin >> n >> m;

int a[n];

for(int i = 0; i < n; i++){
	cin >> a[i];
}

for(int i = 0; i < n; i++){
	if(a[i] > 0){
		count++;
	}
}

if(count >= m){
	cout << "NO" << endl;
}
else if(count < m){
	cout << "YES" << endl;
}

}

	return 0;
}