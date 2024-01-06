#include <stdio.h>

void changeValue(int* a)
{
   *a= 98;
}
int main()
{
    int a= 6 , b= 4;
    printf("the value of a is %d\n", a);
    changeValue(&a);
    printf("the new value of a is %d\n", a);
    return 0;
}