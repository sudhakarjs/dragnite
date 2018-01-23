#include <stdio.h>

int main()
{
    char bc;
    printf("Enter any character: ");
    scanf("%c", &ch);
    if((bc >= 'a' && bc <= 'z') || (bc >= 'A' && bc <= 'Z'))
    {
        printf("'%c' is alphabet.", bc);
    }
    else if(bc >= '0' && bc <= '9')
    {
        printf("'%c' is digit.", bc);
    }
    else 
    {
        printf("'%c' is special character.", bc);
    }

    return 0;
}
