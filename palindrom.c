#include <stdio.h>
int main()
{
    int a, reversedInteger = 0, remainder, originalInteger;

    printf("Enter an integer: ");
    scanf("%d", &a);

    originalInteger = a; 
    while( a!=0 )
    {
        remainder = a%10;
        reversedInteger = reversedInteger*10 + remainder;
        a /= 10;
    }
    if (originalInteger == reversedInteger)
        printf("%d is a palindrome.", originalInteger);
    else
        printf("%d is not a palindrome.", originalInteger);
    
    return 0;
}
