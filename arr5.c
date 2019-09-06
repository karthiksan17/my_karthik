#include<stdio.h>
int main()
{
 int a[10][10],i,k,n;
 printf("enter order of matrix");
 scanf("%d",&n);
 printf("enter matrix elements");
 for(i=0;i<n;i++)
 for(k=0;k<n;k++)
 scanf("%d",&a[i][k]);
 for(i=0;i<n;i++)
 {
  for(k=0;k<n;k++)
   {
   if((i==k)||(i+k)==(n-1))
   printf("diagonal element is a[%d][%d]=%d\n",i,k,a[i][k]);
   }
  }
return 0;
}
