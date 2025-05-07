#include<stdio.h>
void fun(int* p)
{
    *p = 20;
    // printf("fun function er x er adderess: %p\n",&x);
}
int main()
{
    int x = 10;
    fun(&x);
    printf("%d",x);
    // printf("Main function er x er adderess: %p\n",&x);
    return 0;
}