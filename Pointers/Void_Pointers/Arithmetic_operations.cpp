#include<stdio.h>
int main()
{
    //integer array
    int aiData[3] = {100, 200,300};
    //assigned first element address to the void pointer
    void *pvData = &aiData[0];
    printf(" pvData = %lu\n", pvData);
    printf(" pvData+1 = %lu\n", (int*)pvData +1); //Correct
    return 0;
}





