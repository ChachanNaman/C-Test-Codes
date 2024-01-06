#include <stdio.h>
int func1(int array[])
{
  for (int i = 0; i < 4; i++)
  {
    printf("the value at %d is %d\n", i , array[i]);
  }
  
  array[0]=87;

return 0;

}



int main()
{
    int arr[]= {21,3,7,8};
    // printf("the value at index 0 is %d\n", arr[0]);
    // func1(arr);
    // printf("the value at index 0 is %d\n", arr[0]);
    return 0;
}