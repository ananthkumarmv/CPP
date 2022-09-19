#include<iostream>

using namespace std;

int global_var = 42;

void changePointerValue(int** ptr_ptr){
	*ptr_ptr = &global_var;
}



int main(){
	
	int var = 23;
	
	int *ptr_to_var = &var;
	
	cout << "Passing a pointer to a pointer to function " << endl;
  
    cout << "Before :" << *ptr_to_var << endl; // display 23
  
    changePointerValue(&ptr_to_var);
  
    cout << "After :" << *ptr_to_var << endl; // display 42
  
	
	return 0;
}
