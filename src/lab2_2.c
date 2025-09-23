#include <stdio.h>

/*
    Task:
    Write a function `long long factorial(int n)` that computes n!
    using a loop (not recursion).

    In main():
      - Ask user for an integer n
      - If n is negative, print an error and exit
      - Otherwise, call factorial and print the result
*/

long long factorial(int n) {
    long long f=1;
    for (int i=n; i>=1; i--){
       f=f * i;

    }
    return f; // placeholder
}

int main(void) {
    int n;

    printf("Enter a non-negative integer n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Error\n");
    } else {
        int result = factorial(n);
        printf("The factorial is %d\n", result);
    }
    return 0;
}
