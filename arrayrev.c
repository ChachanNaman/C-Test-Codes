#include <stdio.h>
void arrayrev(int arr[]);
{


     
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    printf("before eversal of the array\n");
    for (int i = 0; i < 7; i++)
    {
        printf("the value of the element %d is %d\n", i, arr[i]);
    }

    printf("\nafter  eversal of the array\n");
    for (int i = 0; i < 7; i++)
    {
        printf("the value of the element %d is %d\n", i, arr[i]);
    }
    
    return 0;
}