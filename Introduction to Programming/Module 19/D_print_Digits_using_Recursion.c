#include<stdio.h>
void rec(int n)
{
    if(n==0)
    {
        return;
    }
    rec(n/10);
    int last = n%10;
    printf("%d ",last);
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        int n;
        scanf("%d",&n);
        rec(n);
        if(n==0)
        {
            printf("0");
        }
        printf("\n");
    }   
    return 0;
}