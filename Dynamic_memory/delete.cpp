#include<iostream>

using namespace std;

int main(int argc, char** argv){
	
	int* piValue  = NULL; // integer Pointer initialized with NUlL
   
    piValue = new int;  // Allocate the memory using new operator
    
    (*piValue) = 276; // Assigned the value
    
    cout<<*piValue;
    
    delete piValue;  // delete the allocated memory
	
    return 0;
}


