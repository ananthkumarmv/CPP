#include<stdio.h>
#include<stdlib.h>



int main(){
	int x;
	int *ptr1 = &x;
	int *ptr2 = (int *) malloc(sizeof(int));
	int *ptr3 = new int;
	int *ptr4 = NULL;
	
	// detete should not be used like below
	//bcz x is allocated on stack frame
	
	delete ptr1;
	
	/* delete should not be used like below
	   bcz x is allocated using malloc() */
	delete ptr2;
	
	//correct uses of delete
	
	delete ptr3;
	delete ptr4;
	
	getchar();


    return 0;
}


