#include<iostream>

using namespace std;

int *Fun(){
	int Data =5;
	
	return &Data;
}

int main(){
	
	int *piData = Fun();
	
	cout<<*piData;
	
    return 0;
}


