#include <stdio.h>
int main(int argc, char *argv[])
{
    void *pvData = NULL; 
    int *iData  = NULL;
    char *cData = NULL;
    float *fData = NULL;
    
    printf("size of void pointer = %d\n\n",sizeof(pvData));
    
    printf("size of integer pointer = %d\n\n",sizeof(iData));
    
    printf("size of character pointer = %d\n\n",sizeof(cData));
    
    printf("size of float pointer = %d\n\n",sizeof(fData));
    
    return 0;
}
