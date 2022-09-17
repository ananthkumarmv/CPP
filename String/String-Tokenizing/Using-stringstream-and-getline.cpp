#include<iostream>
#include <vector>
#include <sstream>

using namespace std;

int main(){
	
	string my_string;
	
	getline(cin, my_string);
	
	//converting my_string into string stream
	stringstream ss(my_string); 
	vector<string> tokens;
	
	string temp_str;
	
	//using space as delimiter for cutting string
	while(getline(ss, temp_str, ' ')){ 
      tokens.push_back(temp_str);
   }
   
   for(int i = 0; i < tokens.size(); i++) {
      cout << tokens[i] << endl;
   }

	return 0;
}
