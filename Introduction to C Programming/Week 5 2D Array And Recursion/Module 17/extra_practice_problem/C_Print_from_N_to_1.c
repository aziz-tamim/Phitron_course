#include<stdio.h>
void print_form(int n)
{
    if(n == 1)
    {
        printf("%d",n);
        return;
    }
    printf("%d ",n);
    print_form(n-1);

}
int main()
{
    int n;
    scanf("%d",&n);
    print_form(n);
    return 0;
}
