#include<stdio.h>
int add(int a[][3],int b[][3])
{
 int c[3][3],i,k;
 for(i=0;i<3;i++)
 for(k=0;k<3;k++)
 {
   c[i][k]=a[i][k]+b[i][k];
   printf("c[%d][%d]=%d\n",i,k,c[i][k]);
 }
}
int main()
{
 int a[3][3],b[3][3],d,e;
 printf("enter A matrix numbers\n");
 for(d=0;d<3;d++)
 for(e=0;e<3;e++)
 scanf("%d",&a[d][e]);
 printf("enter B matrix numbers\n");
 for(d=0;d<3;d++)
 for(e=0;e<3;e++)
 scanf("%d",&b[d][e]);
 add(a,b);

return 0;
} 
