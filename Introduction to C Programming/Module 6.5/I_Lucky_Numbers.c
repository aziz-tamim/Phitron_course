#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int a = n / 10;
    int b = n % 10;
    
    if (b != 0 && a % b == 0 || a != 0 && b % a == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}


// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%n",&n);

//     int first_digit = n/10;
//     int second_digit = n%10;

//     if(second_digit == 0)
//     {
//         printf("YES\n");
//     }
//     else if(first_digit%second_digit==0 || second_digit%first_digit==0)
//     {
//         printf("YES\n");
//     }
//     else
//     {
//         printf("NO\n");
//     }
//     return 0;
// }

