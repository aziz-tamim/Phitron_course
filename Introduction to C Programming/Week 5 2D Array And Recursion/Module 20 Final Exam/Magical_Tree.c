#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int max_star = 10 + n+1;
    int top_rows = (max_star-1)/ 2+ 1;

    for (int i = 0; i < top_rows; i++) {
        int stars = 2 * i+1;
        int spaces = (max_star -stars)/2;

        for (int j=0 ; j <spaces; j++)
        {
            printf(" ");
        }
        for (int j=0; j< stars;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    int star_length = n;
    int star_row = 5 ;
    int tre_bottom = (max_star- star_length)/2;

    for(int i=0; i<star_row; i++)
    {
        for(int j=0; j<tre_bottom; j++)
        {
            printf(" ");
        }
        for(int j=0; j< star_length; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

