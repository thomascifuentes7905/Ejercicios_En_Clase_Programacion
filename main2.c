#include <stdio.h>
int main()
{
    char vocales[] = {'a','e','i','o','u',};
     int *ptr;

    ptr = &vocales[0];
    for (char i=0; i< 5; i++)
    {
        printf("%c", vocales[i]);
        printf("%c\n", *(ptr+i));
        }
}