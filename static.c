#include <stdio.h>

int func1(int b1)
{
    static int myvar = 33;
    printf("the value of myvar is %d\n", myvar);
    myvar++;
    // printf("the address of b inside the func1 is %d\n", &b);
return b1 + myvar;
}

int main()
{
    int b = 344;
    // printf("the address of the b inside the main is %d\n", &b); 
    int val = func1(b);
     val = func1(b);
     val = func1(b);
     val = func1(b);
     val = func1(b);
     val = func1(b);
    // int *ptr = &val;
    // printf("the value of b is %d", val);
    return 0;
}