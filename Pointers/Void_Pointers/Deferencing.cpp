#include<iostream>

using namespace std;

int main(){
	
	void *pvData;
	
	int iData = 65;
	
	pvData = &iData;
	
	cout<<*(char*)pvData;

    return 0;
}


