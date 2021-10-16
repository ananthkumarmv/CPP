#include<iostream>

using namespace std;

class Animal{
	public:
		
		unsigned int m_uiSpeed;
		Animal();
		~Animal();
};


Animal::Animal() //constructor
{
	cout<<"\nCreating Object\n";
}

Animal::~Animal() //destructor
{
	cout<<"\nDeleting object\n";
}


int main(){
	
	Animal *cat = new Animal();   // creating object using new operator
	
	delete cat;
	
    return 0;
}


