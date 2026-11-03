#include <stdio.h>
int main()
{
int x,rev=0,rem;
 printf("Enter a number ");
 scanf("%d",&x);
 while(x>0)
 {
   rem=x%10;
   x=x/10;
   rev=rev*10+rem;
 }
 printf("\nReverse of the number is %d\n",rev);
return 0;
}
  