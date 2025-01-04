//
// Created by Julio on 04/01/2025.
//
#include <stdio.h>

int main() {
  int age;

  printf("Enter your age: ");
  scanf("%d", &age);

  if (age >= 18) {
    printf("You are an adult\n");
  } else {
    printf("You are not an adult\n");
  }

  if (age >= 18) {
    printf("You are an adult\n");
  } else if (age >= 12) {
    printf("You are a teenager\n");
  } else {
    printf("You are a child\n");
  }

  age >= 18 ? printf("You are an adult\n") : printf("You are not an adult\n");
}