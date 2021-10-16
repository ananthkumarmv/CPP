#include<iostream>

using namespace std;

class Animal{
	public:
		unsigned int m_uiSpeed;
};



int main(){
	
	Animal *pCat = NULL;  // Create a pointer
	
	pCat = new Animal;    // Create object using the new keyword
	
	pCat->m_uiSpeed = 100;  //assign the value to member variable
	
	cout<<"Speed of Cat = "<<pCat->m_uiSpeed<<endl;
	
    return 0;
}


