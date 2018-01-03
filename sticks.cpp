#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

int n;
cin >> n;

vector<int> a(n);

for(int i = 0; i < n; i++){
	cin >> a[i];
}

   for(int i = 1; i < a.size(); i++){
   	  for(int j = i; j >= 1; j--){

         if(a[j] < a[j - 1]){
             swap(a[j], a[j - 1]);
          }
       
       }
   }
 
 int z = 1;
 int k = a[0];

cout << n << endl;

 while(z != 0){

 	int count = 0;

   for(int i = 0; i < a.size(); i++){
   	 a[i] -= k;
   }

   for(int i = 0; i < n; i++){
   	 
   	 if(a[i] > 0){
        count++; 
   	 }
   }

   if(count == 0){
   	  z = 0;
   }
   else{
   	cout << count << endl;
   }

   k = a[n - count];

}

return 0;

}