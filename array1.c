#include <stdio.h>

int main()
{
  int marks[2][4] = {{45, 23, 40, 72},
                      {12, 98, 54, 82} };



                      for (int i = 0; i < 2; i++)
                      {
                        for (int j = 0; j < 2; j++)
                        {
                            printf("the value of %d, %d element of the array is %d\n", i, j, marks[i][j]);
                        }
                        
                      }
                      
return 0;



}