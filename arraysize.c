#include <stdio.h>
int main()
{
    int arr[] = { 1,2,3,4,5,6,88};
    printf("value at position 3 of the array is %d\n", arr[3]);
    printf("the address of first element of the array is %d\n,", &arr[0]);
     printf("the address of first element of the array is %d\n,", arr);
     printf("the address of second element of the array is %d\n", &arr[1]);
 printf("the address of second element of the array is %d\n", arr+1);

printf("the value of address of first element of the array %d\n", *(&arr[0]));
printf("the value of address of first element of the array %d\n", arr[0]);
printf("the value of address of second element of the array %d\n", *(&arr[1]));
printf("the value of address of third element of the array %d\n", *(arr+2));

    return 0;
}