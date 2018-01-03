#include<iostream>
#include<algorithm>

using namespace std;

int main(){

int test;
cin >> test;

for(int i = 0; i < test; i++){

   int n;
   cin >> n;
 
   int height = 1;

   if(n == 0){
   	goto a;
   }

   if(n >= 1){
   	height *= 2;
   	n--;
   }

   for(int i = 1; i <= n; i++){

   	   if(i % 2 == 0){
           height *= 2; 
          
   	   }
   	   else if(i % 2 == 1){
   	   	height += 1;
   	   
   	   }
   }

   a:cout << height << endl;

}

	return 0;
}