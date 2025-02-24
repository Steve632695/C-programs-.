//PROGRAM TO CALCULATE COMPOUND INTEREST
//Name stephen Mambo.
//D33-2421-2023.
/*
The prigram will ask the user to input the following:
principle amount
interest rate
How the interst is compounded, i.e
semi anually,annually or quarterly.
It will calculate the compound interest  based on the formula A=p(1+r)^n
*/
#include <stdio.h>
#include <math.h>
int main() 
{
    float principle, rate, time, compound_interest, amount;
    int n; 
    printf("Enter the principal amount (Ksh): \n");
    scanf("%f", &principle);//input principle amount
    printf("Enter the rate (%%): \n");
    scanf("%f", &rate);//input rate
    printf("Enter time in years:\n ");
    scanf("%f", &time);//input time
    printf("Number of times compounded yearly:\n ");
    scanf("%d", &n);//enter number of times compounded per year
    compound_interest = principle * pow((1 + rate / (100 * n)), (n * time));//Formula for Calculating the compound interest amount.
    printf("Compound Interest: Ksh %.2f\n", compound_interest);//output compound interest amount 
    return 0;
}
