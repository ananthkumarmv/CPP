#include<iostream>

using namespace std;

struct marks{
	int num;
	void Set(int temp){
		num = temp;
	}
	
	void display(){
		cout<<"num= "<<num;
	}
};

int main(){
	
	marks m1;
	m1.Set(9);
	
	m1.display();
	
    return 0;
}


