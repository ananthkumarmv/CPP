#include<iostream>
#include<string>

using namespace std;

int main(){
	
	char str[100];
	
	cin.getline(str, 100);
	
	// This function returns a pointer to 
	// the first occurrence of a character in a string. 
	char* ch = strrchr(str, 'z');
	
	cout<<ch<<endl;
	cout<<ch-str+1;

	return 0;
}
