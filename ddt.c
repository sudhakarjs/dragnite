#include <stdio.h>
#include <string.h>
 
void main()
{
    char b[200];
    int count = 0, i;
 
    printf("enter the string\n");
    scanf("%[^\n]b", b);
    for (i = 0;b[i] != '\0';i++)
    {
        if (b[i] == ' ')
            count++;    
    }
    printf("number of words in given string are: %d\n", count + 1);
}
