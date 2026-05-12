#include <stdio.h>
int main()
{
    int arreglo[] = {2,4,6,8,10};
    int *ptr;

    ptr = &arreglo[0];

    for (int i=0; i< 5; i++){
        printf("arreglo[%d] = %d",i, arreglo[i]);
        ptr = &arreglo[i];
        printf("%d\n", *ptr);
    }
}