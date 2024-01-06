#include <stdio.h>

int main()
{
printf("ayoo pointers lets go\n");
int a= 33;
int *ptra= &a;
int *ptr2= NULL;
printf("the address of a pointer to a is %p\n", &ptra);
printf("the address of a is %p\n", &a);
printf("the address of a is %p\n", ptra);
printf("the value of a is %d\n", *ptra);
printf("the value of a is %d\n", a);
printf("the address of some garbage is %p\n", ptr2);

return 0;
}