#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int m1, m2,d;
        scanf("%d %d %d",&m1,&m2, &d);
        int allwork = m1*d / (m1 + m2);
        int fewerDays = d-allwork;
        printf("%d\n", fewerDays);
    }
    
    return 0;
}