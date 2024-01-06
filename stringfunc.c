#include <stdio.h>
#include <string.h>
int main()
{

    char s1[] = "naman";
    char s2[] = "good";
    char s3[44];
    puts(strcat(s1, s2));
    printf("the lenght of s1 is %d\n", strlen(s1));
    printf("the lenght of s2 is %d\n", strlen(s2));
    printf("the reversed string s1 is : ");
    // puts(strrev(s1));
    
    return 0;
}