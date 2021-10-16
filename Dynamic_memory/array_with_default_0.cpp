#include<iostream>

using namespace std;

int main(){
	int *piValue = NULL;
	piValue = new int[10]();   //implement empty parenthesis
	
	for(int i=0; i<10; i++){
		cout<<*(piValue+i)<<endl;
	}
	
	delete[] piValue;


    return 0;
}


