#include <stdio.h>
#include <string.h>

union student
{
    int id;
    int marks;
    char fav_char;
    char name[66];
};

int main()
{
    union student s1;
    s1.marks = 66;
    s1.fav_char = 't';
    strcpy(s1.name, "naman");
    s1.id = 1;

    printf("the id of s1 is: %d\n", s1.id);
    printf("the marks of s2 is: %d\n", s1.marks);
    printf("the fav char of s1 is: %c\n", s1.fav_char);
    printf("the name of s1 is: %s\n", s1.name);

    return 0;
}