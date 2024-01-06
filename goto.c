#include <stdio.h>

int main()
{
label:
printf("you are inside the label\n");
goto end;
   printf("hello naman\n");

goto label;
end:
printf("congratulation\n");

return 0;

}