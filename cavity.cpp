#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

  int n;
  cin >> n;

  for(int i = 0; i < n; i++){

      string s;
      cin >> s;
      int a[n];

      for(int i = 0; i < n; i++){
          a[i] = s[i] - '0'; 
      }
 
     for(int i = 1; i < n - 1; i++){
   
     	if(a[i] > a[i - 1] && a[i] > a[i + 1]){
     		s[i] = 'X';
     	}
     }

     for(int i = 0; i < n; i++){
     	cout << s[i];
     }

     cout << endl;

  }

	return 0;


}