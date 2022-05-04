# define NDEBUG
#include<iostream>
#include<assert.h>

using namespace std;

int main(){
	
	assert(2+2 == 3+1);
	cout<<"Exp is valid... Execution continues. \n";
	
	assert(2+2 == 1+1);
	cout<<"Assert disabled... execution continues with invalid exp. \n";


    return 0;
}


