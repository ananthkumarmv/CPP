#include<iostream>

using namespace std;

int main(){
	// Initializing array of pointers
	const char* color[4] = {"Blue", "Red", "Orange", "Yellow"};
	
	// Printing Strings stored in Array
	for(int i=0; i<4; i++){
		cout<<color[i]<<endl;
	}


    return 0;
}


