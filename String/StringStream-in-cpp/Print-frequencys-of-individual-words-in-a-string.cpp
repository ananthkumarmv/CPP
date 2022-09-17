#include<iostream>
#include<sstream>
#include<map>
using namespace std;


void printFrequency(string str){
	
	map<string, int> FW;
	
	stringstream ss(str);
	
	string word;
	
	while(ss >> word){
		FW[word]++;
	}
	
	map<string, int>::iterator it;
	for(it = FW.begin(); it != FW.end(); it++){
		cout<<it->first << " -> "<<it->second<<"\n";
	}
}


int main(){
	
	string str;
	
	getline(cin, str);
	
	printFrequency(str);

	return 0;
}
