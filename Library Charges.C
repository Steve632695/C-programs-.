//program to calculate overdue charges for books in a library.
//stephen mambo.D33-2421-2023
/*
the charges are as follows.
upto 7 days -sh20
8-14 days- sh50
15days or more-sh100
*/
#include <stdio.h>
int main()
{
  int overdue_days;
  int number_of_books;
  int fine;
  printf("enter overdue days:\n");
  scanf("%d",&overdue_days);//input number of  overdue days
  printf("enter number of books:\n");
  scanf("%d",&number_of_books);//input number of books
  if (overdue_days <= 7)
      { fine = number_of_books * 20;}//calculating fine if days <=7
     else if (overdue_days <= 14) 
        {fine = number_of_books * 50;}//calculating fine if days =>8, and <=14
     else 
       { fine = number_of_books * 100;}
    printf("The overdue fine is: %d \n", fine);//output fine according to number of overdue days
    return 0;
}