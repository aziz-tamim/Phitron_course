#include<stdio.h>
#include<string.h>
int is_palindrome(char s[])
{
    int l=0, r = strlen(s)-1;
    while(l<r)
    {
        if(s[l] !=s[r])
        {
            return 0;
        }
        l++;
        r--;
    }
    return 1;
}
int main()
{
    char s[1001];
    scanf("%s",&s);
    int palindrome = is_palindrome(s);
    if(palindrome == 1)
    {
        printf("Palindrome\n");
    }
    else {
        printf("Not Palindrome\n");
    }
    return 0;
}