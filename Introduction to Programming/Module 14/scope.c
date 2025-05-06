#include<stdio.h>
int x = 10; // Global variable
int sum()
{
    // int x = 20;
    printf("sum -> %d\n",x);
}
int main()
{
    // int x = 10;
    printf("Main -> %d\n",x);
    sum();
    return 0;
}

