#include<stdio.h>
void print_form(int n, int i)
{
    if(i==n+1)
    {
        return;
    }
    print_form(n,i+1);
    if(i==1)
    {
        printf("%d",i);
    }
    else
    {
        printf("%d ",i);
    }
    
}
int main()
{
    int n;
    scanf("%d",&n);
    print_form(n,1);
    return 0;
}
