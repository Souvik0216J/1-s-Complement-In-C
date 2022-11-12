#include<stdio.h>
#include<string.h>
int main()
{
    char num[50], i, len;
    printf("Enter A Binary Number: ");
    gets(num);
    len = strlen(num);
    for(i=0; i<len; i++)
    {
        if(num[i] == '1')
        {
            num[i] = '0';
        }
        else{
            num[i] = '1';
        }
    }
    printf("1's Complement Is: ");
    puts(num);
    return 0;
}
