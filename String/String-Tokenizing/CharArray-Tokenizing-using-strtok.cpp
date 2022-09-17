#include<iostream>
#include <vector>
using namespace std;

int main(){
	
	char str[100];
	vector<string> vs;
	
	cin.getline(str, 100);
	
	// Returns the first token
	char *token = strtok(str, " ");
	
	// Keep printing tokens while one of the
    // delimiters present in str[].
    
    while(token != NULL){
    	vs.push_back(token);
    	token = strtok(NULL, " ");
	}
	
	for(int i=0; i<vs.size(); i++){
		cout<<vs[i]<<"\n";
	}

	return 0;
}
