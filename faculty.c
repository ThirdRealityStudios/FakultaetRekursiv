#include <stdio.h>
#include <stdlib.h>

int fac(int n)
{
   // Fakultät von negativen Zahlen gibt es nicht. Hier ist es einfach 0.
   if(n < 0)
      return 0;

   if(n == 0 || n == 1)
      return 1;

   return n * fac(n - 1);
}

int main()
{
   int n = 1;

   printf("Fakultät von %d ist %d", n, fac(n));

   return 0;
}
