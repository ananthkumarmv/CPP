#include<iostream>

using namespace std;

int main(){
	// ptr pointing some unknown memory loaction
	int *ptr;  //wild pointer
	
	// assigning value
	*ptr = 12;
	
	cout<<*ptr;
	
    return 0;
}


