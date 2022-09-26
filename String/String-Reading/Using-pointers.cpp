#include<iostream>

using namespace std;

int main(){
	
	const char* color[4] = {"Blue", "Red", "Orange", "Yellow"};
	
	for(int i=0; i<4; i++){
		cout<<color[i]<<endl;
	}

	return 0;
}
