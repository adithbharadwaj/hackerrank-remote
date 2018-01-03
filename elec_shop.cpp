#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

int total, k, m, sum = 0;

cin >> total >> k >> m;

vector<int> key(k);
vector<int> mouse(m);

for(int i = 0; i < k; i++){
	cin >> key[i];
}

for(int i = 0; i < m; i++){
	cin >> mouse[i];
}

   for(int i = 1; i < key.size(); i++){
   	  for(int j = i; j >= 1; j--){

         if(key[j] < key[j - 1]){
             swap(key[j], key[j - 1]);
          }
       
       }
   }

    for(int i = 1; i < mouse.size(); i++){
   	  for(int j = i; j >= 1; j--){

         if(mouse[j] < mouse[j - 1]){
             swap(mouse[j], mouse[j - 1]);
          }
       
       }
   }

   if((key[0] + mouse[0] ) > total ){
   	  cout << "-1" << endl;
   	  return;
   }

    int max = key[0] + mouse[0];

    if(k > m){

   		for(int i = 0; i < k; i++){
   	  		for(int j = 0; j < k; j++){
   	  	  		if((key[i] + mouse[j]) <= total){
   	  	  			sum = key[i] + mouse[j];
   	  	  			if(sum >= max){
   	  	  				max = sum;
   	  	  			}
   	  	  		}
   	  		}
   		}
    }

    else{       

       for(int i = 0; i < m; i++){
   	      for(int j = 0; j < m; j++){
   	  	  	if((key[j] + mouse[i]) <= total){
   	  	  		
   	  	  		sum = key[j] + mouse[i];
   	  	  		
   	  	  		if(sum >= max){
   	  	  			max = sum;
   	  	  	    	}
   	  	    	
   	  	    	}
   	  	    }
   	    }	  
 
    }


   cout << max << endl;


	return 0;
}