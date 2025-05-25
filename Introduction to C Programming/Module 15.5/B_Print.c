#include <stdio.h>

void number(int n){

    for (int i = 1; i <= n; i++)
    {
        printf("%d ",i);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    number(n);
    return 0;
}
