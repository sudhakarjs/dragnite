#include <stdio.h>
#include <math.h>
 
void main()
{
    int num, dev = 0, cal = 0, tube = 0, temp;
 
    printf ("enter a num");
    scanf("%d", &number);
    temp = num;
    while (num != 0)
    {
        cal = num % 10;
        tube = pow(rem, 3);
        dev = dev + tube;
        num = num / 10;
    }
    if (dev == temp)
        printf ("The given no is armstrong no");
    else
        printf ("The given no is not a armstrong no");
}
