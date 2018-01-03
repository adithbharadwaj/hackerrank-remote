#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

int n;
cin >> n;

int step = 0, valley = 0;

char s[n];

for(int i = 0; i < n; i++){
	cin >> s[i];
}

for(int i = 0; i < n; i++){

    if(step == 0 && s[i] == 'D'){
        valley++;
    } 

	if(s[i] == 'U'){
		step++;
	}
	else if(s[i] == 'D'){
		step--;
	}

}

cout << valley << endl;

	return 0;
}