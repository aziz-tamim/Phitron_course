#include<stdio.h>
int main()
{
    char s[1000001];
    fgets(s,100001,stdin);
    for(int i=0;s[i] != '\\'; i++)
    {
        printf("%c",s);
    }
    return 0;
}