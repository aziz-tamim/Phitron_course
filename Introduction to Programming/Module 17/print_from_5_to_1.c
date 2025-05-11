// #include<stdio.h>
// void hello(int i)
// {
//     if(i==0) // end condition
//     {
//         return;
//     }
//     printf("%d\n",i);
//     hello(i-1);     // increment/decrement
// }
// int main()
// {
//     hello(5);   // initialization/starting
//     return 0;
// }


// #include<stdio.h>
// void hello(int i)
// {
//     if(i==101)
//     {
//         return;
//     }
//     printf("%d\n",i);
//     hello(i+1);
// }
// int main()
// {
//     hello(1);
//     return 0;
// }

#include<stdio.h>
void hello(int i)
{
    if(i==101)
    {
        return;
    }
    if(i%2==0)
    {
        printf("%d\n",i);
    }
    hello(i+1);
}
int main()
{
    hello(1);
    return 0;
}