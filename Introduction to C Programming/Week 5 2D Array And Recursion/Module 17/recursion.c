#include<stdio.h>
void hello() // recurcive function 
{
    printf("Hello\n");
    // hello();  // recursion infinite loop
}
int main()
{
    printf("Hi\n");
    hello();
    return 0;
}