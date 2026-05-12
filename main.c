#include <stdio.h>
int main()
{
    int arreglo[] = {2,4,6,8,10};
    int *ptr;

    ptr = &arreglo[0];
// impresión de arreglo con punteros
    for (int i=0; i< 5; i++){

        printf("arreglo[%d] = %d\t",i, arreglo[i]);
        //ptr = &arreglo[i];
        printf("%d\n", *(ptr+i));
    }
}