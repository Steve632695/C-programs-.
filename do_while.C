//program to calculate cube of numbers and loop using do while loop
//stephen Mambo
//D33-2421-2023
#include <stdio.h>

int main() {
    int i = 1, n;

    // Prompt user for input
    printf("Enter number of times to iterate (n): ");
    scanf("%d", &n);

    // Loop to print numbers and their cubes
    do {
        printf("The number is: %d and the cube of the %d is: %d\n", i, i, i * i * i);
        i++; // for i to increase with vakue of 1.
    } while (i <= n); // Condition checked after execution

    return 0;
}