#include <stdio.h>

int main()
{

int marks[4];

for(int i = 0; i < 4; i++)
{
    printf("Enter the value of %d of an element of the array", i);
    scanf("%d\n", &marks[i]);
}

for (int i = 0; i < 4; i++)
{
    printf("The value of %d element of the array is %d\n", i, marks[i]);
}

return 0;


}
