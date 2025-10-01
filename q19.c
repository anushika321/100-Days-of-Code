#include <stdio.h>
int main()
{
   int a = 2, b = 4, c = 6, d = 56;

   if (a > b && a > c && a > d)
      
   {
      printf(" is greatest of all is %d", a);
   }
   else if (b > a && b > c && b > d)
   {
       printf(" is greatest of all is %d", b);
   }
   else if (c > b && c > a && c > d)
   {
      printf(" is greatest of all is %d", c);
   }
   else if (d > b && d > c && d > a)
   {
      printf(" is greatest of all is %d", d);
   }

   return 0;
}