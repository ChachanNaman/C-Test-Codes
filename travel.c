#include <stdio.h>

struct driver
{
    char name[33];
    char dlNo[33];
    char route[33];
    int kms;
};

int main()
{
    struct driver d1, d2, d3;
    printf("enter the detail of the driver no.1\n");
    printf("enter the name of first driver\n");
    scanf("%s", &d1.name);

    printf("enter the driving lc no. of first driver\n");
    scanf("%s", &d1.dlNo);

    printf("enter the route of first driver\n");
    scanf("%s", &d1.route);

    printf("enter the kms of first driver\n");
    scanf("%d", &d1.kms);
    

     printf("enter the detail of the driver no.2\n");
    printf("enter the name of second driver\n");
    scanf("%s", &d2.name);

    printf("enter the driving lc no. of second driver\n");
    scanf("%s", &d2.dlNo);

    printf("enter the route of second driver\n");
    scanf("%s", &d2.route);

    printf("enter the kms of second driver\n");
    scanf("%d", &d2.kms);


     printf("enter the detail of the driver no.3\n");
    printf("enter the name of third driver\n");
    scanf("%s", &d3.name);

    printf("enter the driving lc no. of third driver\n");
    scanf("%s", &d3.dlNo);

    printf("enter the route of third driver\n");
    scanf("%s", &d3.route);

    printf("enter the kms of third driver\n");
    scanf("%d", &d3.kms);
    
    printf("*********printing information of drivers\n");
    printf("for driver no.1\n");
    printf("the name of the driver 1 is %s\n",d1.name);
    printf("the dlNo. of the driver 1 is %s\n",d1.dlNo);
    printf("the route of the driver 1 is %s\n",d1.route);
    printf("the kms travelled is %d\n", d1.kms);
    
    printf("for driver no.2\n");
    printf("the name of the driver 2 is %s\n",d2.name);
    printf("the dlNo. of the driver 2 is %s\n",d2.dlNo);
    printf("the route of the driver 2 is %s\n",d2.route);
    printf("the kms travelled is %d\n", d2.kms);

    printf("for driver no.3\n");
    printf("the name of the driver 3 is %s\n",d3.name);
    printf("the dlNo. of the driver 3 is %s\n",d3.dlNo);
    printf("the route of the driver 3 is %s\n",d3.route);
    printf("the kms travelled is %d\n", d3.kms);
return 0;
printf()
}
 