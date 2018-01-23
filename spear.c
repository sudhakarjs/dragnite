#include<stdio.h>
 
int main()
{
   int a, b = 3, count, d;
 
   printf("Enter the number of prime numbers required\n");
   scanf("%d",&a);
 
   if ( a >= 1 )
   {
      printf("First %d prime numbers are :\n",a);
      printf("2\n");
   }
 
   for ( count = 2 ; count <= a ;  )
   {
      for ( d = 2 ; d <= b - 1 ; d++ )
      {
         if ( b%c == 0 )
            break;
      }
      if ( d == b )
      {
         printf("%d\n", b);
         count++;
      }
      b++;
   }
 
   return 0;
}
