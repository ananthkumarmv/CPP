#include<iostream>

using namespace std;

int main(){
	
	char *pcBuffer = new char[10]; //allocated memory for array of character
	
	for(int i=0; i<9; i++)         // assigned data to the buffer
		pcBuffer[i] = i+48;
		
		
	for(int i=0;i<9;i++)
		cout<<pcBuffer[i]<<endl;
		
	delete[] pcBuffer;   //delete the allocated memory
		
		
    return 0;
}


