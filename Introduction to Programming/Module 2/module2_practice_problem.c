// Question:- Take a number from user and check if its a even number or odd number.
// Bangla:- ব্যবহারকারীর কাছ থেকে একটি সংখ্যা নিন এবং পরীক্ষা করুন যে এটি জোড় সংখ্যা নাকি বিজোড় সংখ্যা।
// Answer:-
#include <stdio.h>
int main() {
    int number;
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("%d is an even number.\n", number);
    } else {
        printf("%d is an odd number.\n", number);
    }
    return 0;
}

// Question:- Take a number from user and check if its a positive or negative number.
// Bangla:- ব্যবহারকারীর কাছ থেকে একটি সংখ্যা নিন এবং পরীক্ষা করুন যে এটি একটি ধনাত্মক না ঋণাত্মক সংখ্যা।
// Answer:- 
// #include <stdio.h>
// int main() {
//     int number;
//     scanf("%d", &number);
//     if (number > 0)
//     {
//         printf("The number is positive.\n");
//     }
//     else if (number < 0)
//     {
//         printf("The number is negative.\n");
//     }
//     return 0;
// }