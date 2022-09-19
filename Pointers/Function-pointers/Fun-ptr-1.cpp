#include<iostream>

using namespace std;

void fun(int a){
	cout<<a;
}

int main(){
	
	// fun_ptr is a pointer to function fun()
	void (*fun_ptr)(int) = &fun;
	
	/* the above line equilent of following two
	   void (*fun_ptr)(int);
	   fun_ptr = &fun;
	*/
	
	// invoking fun() using fun_ptr
	(*fun_ptr)(10);

	return 0;
}
