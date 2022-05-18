#include<iostream>
#include <cstdlib>

using namespace std;

void quick_exit1()
{
	cout << "Exit Function 1" << endl;
}
void quick_exit2()
{
	cout << "Exit Function 2" << endl;
}


int main(){
	
	at_quick_exit(quick_exit1);
	at_quick_exit(quick_exit2);
	
	quick_exit(0);


    return 0;
}


