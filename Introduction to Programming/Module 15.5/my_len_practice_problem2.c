#include<stdio.h>
char my_len(char str[])
{
    int cnt = 0;
    while(str[cnt] != '\0')
    {
        cnt++;
    }
    return cnt;
}
int main()
{
    char inp[100];
    scanf("%s",inp);
    int length = my_len(inp);
    printf("%d",length);
    return 0;
}