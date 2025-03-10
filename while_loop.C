//program to calculate cube of numbers using while loop.
//stephen Mambo
//D33-2421-2023
#include <stdio.h>

int main() {
    int i = 1, n;

    // the user to input the value of n, times to repeat
    printf("Enter number of times (n): ");
    scanf("%d", &n);

    // Loop to print numbers and their cubes
    while (i <= n) {
        printf("The number is: %d and the cube of the %d is: %d\n", i, i, i * i * i);
        i++; // for i to increase
    }

    return 0;//program successifully executed
}