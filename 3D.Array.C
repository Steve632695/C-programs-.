/*
3D array.
*/
#include <stdio.h>
int main() 
{
    int i, j, k;
    int marks[2][2][3] = 
    {
        { {1, 2, 3}, {7, 9, 3} },
        { {74, 55, 21}, {12, 25, 84} }
    };
//for loops
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 3; k++) {
                printf("%d   \t", marks[i][j][k]);
            }
            printf("\n"); //print in new line
        }
        printf("\n"); //print in new line
  }
    return 0; //execution successiful
}