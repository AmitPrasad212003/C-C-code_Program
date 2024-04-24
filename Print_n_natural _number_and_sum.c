#include<stdio.h>
int main()
{
   int n,i;
   printf("Enter your Number :");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      printf("N natural no." ,i);
   }
   for(i=1;i<=n;i++)
   {
      int sum=0;
      sum +=i;
      printf("sum of nth no.",sum);
   }
   for(i=1;i<=n;i++)
   {
      int factorial;
      factorial*=i;
      printf("factrial of n",factorial);

   }

   return 0;
}