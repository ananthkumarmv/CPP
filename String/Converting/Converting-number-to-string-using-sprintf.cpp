#include<iostream>

using namespace std;

int main(){
	
	int n = 1234;
	
	char str[1000];
	
	sprintf(str, "%d", n);
	
	cout<<str;

	return 0;
}
