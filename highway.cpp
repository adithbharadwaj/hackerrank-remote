#include<iostream>
#include<algorithm>

using namespace std;

int main(){

int n, t;
cin >> n >> t;

int a[n];

for(int i = 0; i < n; i++){
	cin >> a[i];
}

for(int i = 0; i < t; i++){

    int in, out;
    cin >> in >> out;
 
    int min = a[in]; 
      
    for(int i = in; i <= out; i++){
         if(a[i] <= min){
         	min = a[i];
         }
    }

     cout << min << endl;

}

	return 0;
}