#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main(){

int t;
cin >> t;

for(int i = 0; i < t; i++){

   string a;
   cin >> a;

   int count = 0, temp = 0;

   for(int i = 0; i < a.length(); i++){
        a[i] = a[i] - '0'; 
   }

   for(int i = 0; i < a.length(); i++){
        temp = temp * 10 + (a[i] - '0');
      
   }

   for(int i = 0; i < a.length(); i++){
   	   if(a[i] != 0){
          
          if(temp % a[i] == 0){
          	count++;
          }
   	   }
   }

cout << count << endl;

}

	return 0;
}