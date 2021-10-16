#include<iostream>
#include<new>
using namespace std;

int main(){
	
	int *piValue = NULL;
	
	piValue= new(nothrow) int[9999999999999];   // here using nothrow
	
	if(piValue == NULL){
		cout<<"Free memory is not available"<<endl;
	}
	else{
		cout<<"Free memory avail"<<endl;
		delete[] piValue;
	}

    return 0;
}


