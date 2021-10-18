#include<iostream>
#include<algorithm>
#define ELEMENT_SIZE(x) sizeof(x[0])
#define ARRAY_SIZE(x)   (sizeof(x)/sizeof(x[0]))

using namespace std;

//compare function for integer array
int compareInt(const void *a, const void *b){
	int x = *(const int *)a;
	int y = *(const int *)b;
	
	return x>y;
	
	return 0;
}


//compare function for float array
int compareFloat(const void *a, const void *b){
	float x = *(const float *)a;
	float y = *(const float *)b;
	
	return x<y;
	
	return 0;
}


int main(){
	// integer array
	int iData[] = {40, 10, 100, 90, 20, 25};
	
	//float array
	float fData[]  = {1.2,5.7,78,98.5,45.67,81.76};
	//array index
	int i = 0;
	
	// sorting integer array
	qsort(iData, ARRAY_SIZE(iData), ELEMENT_SIZE(iData), compareInt);
	for(i=0; i<ARRAY_SIZE(iData);i++){
		cout<<iData[i]<<" ";
	}
	
	cout<<"\n\n";
	
	//sorting float array
	qsort(fData, ARRAY_SIZE(fData), ELEMENT_SIZE(fData), compareFloat);
	for(i=0; i<ARRAY_SIZE(fData); i++){
		cout<<fData[i]<<" ";
	}
	
    return 0;
}


