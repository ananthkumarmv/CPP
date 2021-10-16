#include<iostream>

using namespace std;

int main(int argc, char** argv){
	
	int* piValue = NULL;  // integer pointer initialized with NULL
	piValue = new int;    // Allocate the memory using nw operator
	
	(*piValue) = 276; // Assign the value
	
	cout<<*piValue;


    return 0;
}


