#include<stdio.h>
void reverse(char*str)
{
   
    if(*str)
    {
        reverse(str+1);
        printf("%c",*str);
    }
}
int main()
{
    char a[]="Shantanu";
    reverse(a);
    return 0;
}
/*
OUTPUT:
unatnahS
*/
