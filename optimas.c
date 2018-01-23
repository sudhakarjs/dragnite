#include <stdio.h>
int main()
{
    int b, c, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d",&b);

    for(c=2; c<=b/2; ++c)
    {
        if(b%c==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.",n);
    
    return 0;
}

