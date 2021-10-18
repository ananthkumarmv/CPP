#include<iostream>

using namespace std;

int main(){
	
	int data =27;
	
	// now pointer pointing valid memory
	int *ptr = &data;
	
	*ptr = 12;
	
	cout<<*ptr;


    return 0;
}


