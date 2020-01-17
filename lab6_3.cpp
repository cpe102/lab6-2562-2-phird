#include<iostream>
using namespace std;

char before(char x){
	 char y = x-1;	
		if(int(x) > 90 || int(x) < 65){
			return '0';
		}else if ( x == 'A'){
			return 'Z'; 
		}
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
