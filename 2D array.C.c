// Arrays, 2D array

#include<stdio.h>
int main () {
  int i,j;
  int marks[3][2]={
    {22,76},
    {53,49},
    {51,62}
 };
 //for loops
 for (i=0; i<3; i++){
   for (j=0; j<2; j++){
     printf("%d  \t", marks [i][j]);//output
   }
   printf("\n");//print in new line.
 }
    return 0;
}