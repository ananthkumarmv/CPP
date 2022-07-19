#include<iostream>

using namespace std;

int main(){
	// Initializing 2D array
	char color[4][10] = {"Blue", "Red", "Orange", "Yellow"};
	
	// Printing Strings stored in 2D Array
	for(int i=0; i<4; i++){
		cout<<color[i]<<endl;
	}


    return 0;
}


