#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[55];
};
int main()
{

struct Student naman = {1, 33, 'p'};
struct Student manoj;
printf("id of naman is %d\n", naman.id);
printf("marks of naman is %d\n", naman.marks);
printf("favourite character of naman is %c\n", naman.fav_char); 
 strcpy(naman.name, "naman is good boy");
 printf("quality of naman is : %s\n", naman.name);
 strcpy(manoj.name, "monoj is a bad boy");
 printf("quality of manoj is : %s\n", manoj.name);
printf("teh orint of the statement is naman");
strcpy


return 0;
}