//
// Created by Julio on 04/01/2025.
//
#include <stdio.h>

int main(void) {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    switch (age) {
        case 18:
            printf("You are 18 years old\n");
            break;
        case 19:
            printf("You are 19 years old\n");
            break;
        case 20:
            printf("You are 20 years old\n");
            break;
        default:
            printf("You are not 18, 19 or 20 years old\n");
    }

    switch (age) {
        case 18:
        case 21:
            printf("You are 18 or 21 years old\n");
            break;

        case 2 :
        case 3 :
        case 4 :
        case 5 :
        case 6 :
            printf ("You are a child\n");
        default:
            printf("You are not 18 or 21 years old\n");
    }
}