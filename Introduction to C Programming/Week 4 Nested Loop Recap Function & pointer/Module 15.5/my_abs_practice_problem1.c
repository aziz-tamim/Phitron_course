#include<stdio.h>
int my_abs(int num)
{
    if(num<0)
    {
        return -num;
    }
    else
    {
        return num;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int answer = my_abs(n);
    printf("%d",answer);
    return 0;
}
