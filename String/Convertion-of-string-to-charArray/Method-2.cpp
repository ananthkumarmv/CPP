#include<iostream>

using namespace std;

int main(){
	
	string str("Unbeknownstguy");
	
	char ch[str.length()];
	
	for(int i=0; i<sizeof(ch); i++){
		ch[i] = str[i];
	}
	
	for(int i=0; i<sizeof(ch); i++){
		cout<<ch[i];
	}


	return 0;
}
