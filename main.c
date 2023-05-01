#include <stdio.h>
#include <stdlib.h>

int main()
{
   char a[30];
   int i;

   printf("Input the string :");
   gets(a);
   for(i=0;a[i]!='\0';i++)
   printf("%c ",a[i]);

    return 0;
}
