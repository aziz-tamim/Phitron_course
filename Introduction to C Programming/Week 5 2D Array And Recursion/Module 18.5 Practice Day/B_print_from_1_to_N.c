#include<stdio.h>
void print_form(int n, int i)
{
    if(i==n+1)
    {
        return;
    }
    printf("%d\n",i);
    print_form(n,i+1);
}
int main()
{
    int n;
    scanf("%d",&n);
    print_form(n,1);
    return 0;
}
