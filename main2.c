#include <stdio.h>
int main()
{
    char vocales[] = {'a','e','i','o','u',};
    char *ptr;

    ptr = &vocales[0];
    for (int i=0; i< 5; i++)
    {
        printf("%c",vocales[i]);
        printf("%c\n", *(ptr+i));
        }
}