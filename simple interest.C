//program to calculate simple interest (SI)
/*user prompted to enter the following:
principle=P
time=T
rate=R
*/
#include <stdio.h>
int main()
{
  int P;
  int T;
  int R;
  int SI;
  printf("enter principle P\n");
  scanf("%d",&P);
  printf("enter time T\n");
  scanf("%d",&T);
  printf("enter rate R\n");
  scanf("%d",&R);
  SI=P*T*R/100;
  printf("simple interest:%d",SI);
  return 0;
}
