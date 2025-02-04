#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   float n;
    printf(“Enter a number”);
    scanf(“%f”,&n);
    printf(“The float number is %f”,n);
    return 0;
}