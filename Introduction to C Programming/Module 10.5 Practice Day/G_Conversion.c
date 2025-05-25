#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[100005];
    scanf("%s",str);
    for(int i=0; str[i] !='\0'; i++)
    {
        if(str[i] == ',')
        {
            printf(" ");
        }
        else if(islower(str[i]))
        {
            printf("%c",toupper(str[i]));
        }
        else if(isupper(str[i]))
        {
            printf("%c",tolower(str[i]));
        }
        else
        {
            printf("%c",str[i]);
        }
    }
    printf("\n");
    return 0;
}