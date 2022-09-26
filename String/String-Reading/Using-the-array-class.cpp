#include<iostream>
#include<array>
#include<string>

using namespace std;

int main(){
	
	array<string, 4> color{ "Blue", "Red",
                            "Orange", "Yellow"
	};
	
	for (int i = 0; i < 4; i++)
        std::cout << color[i] << "\n";
 
	return 0;
}
