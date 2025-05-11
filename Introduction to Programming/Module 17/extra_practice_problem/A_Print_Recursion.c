#include<stdio.h>
void print_recurtion(int n, int i)
{
    if(i==n)
    {
        return;
    }
    printf("I love Recursion\n");
    print_recurtion(n,i+1);
}
int main()
{
    int n;
    scanf("%d",&n);
    print_recurtion(n,1);
    return 0;
}
