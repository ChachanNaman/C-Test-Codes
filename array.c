#include <stdio.h>

int main()
{

int marks[4];

for(int i = 0; i < 4; i++)
{
    printf("enter the value of %d of the element of the array", i);
    scanf("%d\n", &marks[i]);
}

for (int i = 0; i < 4; i++)
{
    printf("the value of %d element of tha array is %d\n", i, marks[i]);
}

return 0;


}