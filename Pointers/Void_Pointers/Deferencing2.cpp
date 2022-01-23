#include<iostream>

using namespace std;

int main(){
	
	void *pv;
	
	int id = 10;
	char cd='A';
	float fd = 45.3;
	
	//Assigning address of character
	pv = &cd;
	
	//deferencing void pointer with character typecasting
	cout<<"cd ="<<*(char *)pv<<endl;
	
	//Assigning address of character int
	pv = &id;
	
	cout<<"id = "<<*(int *)pv<<endl;
	
	// assigning address of float
	pv = &fd;
	
	cout<<"fd = "<<*(float *) pv;

    return 0;
}


