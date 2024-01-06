#include <stdio.h>

void printStr(char str[])
    {
   int i;
while (str[i]!='\0')
{
    printf("%c", str[i]);
    i++;
}

    }

int main()
{
    char str[34];
    gets(str);
    printf("using custom lines in strings\n");
    printStr(str);
    printf("using printf %s\n", str);
    printf("using puts: \n");
    puts(str);
    return 0;
}