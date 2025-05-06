#include<stdio.h>
int small_to_capital(char c)
{
    return c;
}
int main()
{
    char c;
    scanf("%c",&c);
    if(c>='a' && c <='z')
    {
        printf("%c\n", c-32);
    }
    return 0;
}