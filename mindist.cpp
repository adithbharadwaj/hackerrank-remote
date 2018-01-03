#include<iostream>
#include<algorithm>

using namespace std;

int main(){

int n;
cin >> n;
int a[n];

for(int i = 0; i < n; i++){
	cin >> a[i];
}

int d = 1000;

for(int i = 0; i < n - 1; i++){
    for(int j = n - 1; j >i; j--){
    	if(a[i] == a[j] ){
           d = min(abs(i - j), d);
    	}
    }
} 

if(d == 1000){
   cout << "-1" << endl;
}
else{
   cout << d << endl;
}


	return 0;
}