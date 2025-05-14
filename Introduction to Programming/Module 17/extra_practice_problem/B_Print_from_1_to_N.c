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

// same problem but different logic

#include<stdio.h>
void printer(int n)
{
    if (n == 0)
    {
        return;
    }
    printer(n - 1);
    printf("%d\n", n);
}
int main()
{
    int n;
    scanf("%d",&n);
    printer(n);
    return 0;
}