#include<stdio.h>

int main() {
    int age;
    char name[10];
    printf("Enter your age:\n");
    scanf("%d", &age);
    printf("Enter your name:\n");
    scanf("%s", name);
    printf("Hello, %s, u are %d \n", name, age);
    return 0;
}