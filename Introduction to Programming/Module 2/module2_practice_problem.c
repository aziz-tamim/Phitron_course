// Question:- Take a number from user and check if its a even number or odd number.
// Bangla:- ব্যবহারকারীর কাছ থেকে একটি সংখ্যা নিন এবং পরীক্ষা করুন যে এটি জোড় সংখ্যা নাকি বিজোড় সংখ্যা।
// Answer:-
#include <stdio.h>
int main() {
    int number;
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("This is a even number.");
    } else {
        printf("This is a odd number.");
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

// Question:- Explain if else ladder.
// Answer:- ইফ এলস লিডার হচ্ছে যখন অনেক গুলা কন্ডিশান নিয়ে কাজ করতে হয় তখন ইফ এলস লিডার ব্যাবহার করা হয়। ইফ এলস এর মাজখানে এলস ইফ ব্যাবহার করা হয়। ইফ এলস এর মাজখানে যত খুশি তত এলস ইফ ব্যাবহার করা হয়।