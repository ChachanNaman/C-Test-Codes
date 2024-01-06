#include <stdio.h>

int main()
{
    int num, index = 0;
    printf("enter the nummber\n");
    scanf("%d\n", &num);
    do
    {
        printf("%d\n", index);
        index = index + 1;
    } while (index < num);

    return 0;
}