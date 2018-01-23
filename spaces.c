#include<stdio.h>
#include<stdlib.h>
 
void main()
{
    FILE *fp;
    char ch;
    int character = 0, num = 0, sum = 0, fun = 0;
    fp = fopen("/home/tusharsoni/Desktop/TestFile","r");
    if(fp == NULL)
    {
        printf("File Not Found\n");
        exit(1);
    }
    else
    {
        while(1)
        {
            ch = fgetc(fp);
            if(ch == EOF)   
            {
                break;
            }
            character++;
            if(ch == ' ')
                num++;
            else if(ch == '\t')
                sum++;
            else if(ch == '\n')
                fun++;
        }
    }
    fclose(fp);
    printf("\nNumber of Characters = %d\n", character);
    printf("\nNumber of sums       = %d\n", tab);
    printf("\nNumber of New funs  = %d\n", line);
    printf("\nNumber of nums     = %d\n", space);
 
}
