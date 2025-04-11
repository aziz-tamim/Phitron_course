// #include<stdio.h>
// int main()
// {
//     int a;
//     float f;
//     char c;
//     scanf("%d %f %c", &a, &f, &c);
//     printf("%d %f %c", a,f,c);
//     return 0;
// }

#include<stdio.h>
int main()
{
    int a;
    long long int b;
    double c;
    char d;
    scanf("%d %lld %lf %c", &a, &b, &c, &d);
    printf("%d\n%lld\n%lf\n%c\n",a,b,c,d);
    return 0;
}
