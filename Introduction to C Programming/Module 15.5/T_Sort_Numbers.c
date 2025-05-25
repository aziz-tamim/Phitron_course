#include<stdio.h>
void sorted(int a, int b, int c)
{
    int min, mid, max;
    if(a<=b && a<=c)
    {
        min = a;
        if(b <= c)
        {
            mid = b;
            max = c;
        }
        else
        {
            mid = c;
            max = b;
        }
    }
    else if (b <= a && b <=c)
    {
        min = b;
        if(a <= c)
        {
            mid = a;
            max = c;
        }
        else {
            mid = c;
            max = a;
        }
    }
    else {
        min = c;
        if(a <= b)
        {
            mid = a;
            max = b;
        }
        else {
            mid = b;
            max = a;
        }
    }
    printf("%d\n%d\n%d\n\n",min,mid,max);
}
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a, &b, &c);
    sorted(a, b, c);
    printf("%d\n%d\n%d\n\n",a, b, c);
    return 0;
}