#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (; t--;)
    {
        char s[10001];
        scanf("%s",s);
        int count_capital = 0, count_alphabets = 0, count_digit = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i]>='A' && s[i] <='Z')
            {
                count_capital++;
            }
            else if (s[i]>='a' && s[i] <='z')
            {
                count_alphabets++;
            }
            else if (s[i]>='0' && s[i] <='9')
            {
                count_digit++;
            }
        }
        printf("%d %d %d\n", count_capital, count_alphabets, count_digit);
    }
    return 0;
}
