#include<iostream>

using namespace std;

struct demo{
	int a;
};

int main(){
	
	int x=5, y=6;
	
	int* p;
	p = &x;
	p = &y;               // pointer reinitialization allowed
	
	demo d;
	
	int &r = x;
	

    // &r = y;            // 1. compile error
    
    r = y;
    
    p = NULL;
    //&r = NULL;            // 2. compile error
    
    
    // 3. points to next memory location
    p++;
    
    // 3. x value becomes 7
    r++;
    
    cout << &p << " " << &x << '\n'; // 4. Different address
    cout << &r << " " << &x << '\n'; // 4. Same address
    
    demo* q = &d;
    
    demo& qq = d;
    
    q->a = 8;
    // q.a = 8;                      // 5. compile error
    
    qq.a = 10;
    // qq->a = 8;                    // 5. compile error
    
    // 6. Prints the address
    cout << p << '\n';
 
    // 6. Print the value of x
    cout << r << '\n';
    
    cout<<q->a;   

	return 0;
}
