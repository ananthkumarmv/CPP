#include<iostream>

using namespace std;

int main(){
	
	int *piValue = NULL;
	
	try{
		piValue = new int[9999999999999];  //allocate huge amount of memory
	}
	
	catch(...){
		cout<<"Free memory is not available"<<endl;
		
		return -1;
	}
	
	delete []piValue;


    return 0;
}


