#include<stdio.h>
int input(int b,int c,int a[][10])
{
 int i,k;
 printf("enter numbers\n");
 for(i=0;i<b;i++)
 for(k=0;k<c;k++)
 scanf("%d",&a[i][k]);
}
int mul(int h,int i,int n,int f[][10],int g[][10])
{
 int k,l,m,sum=0;
 printf("multiplication of matrix is\n");
 for(k=0;k<h;k++)
 {
  for(l=0;l<n;l++)
  {
   for(m=0;m<i;m++)
    {
      sum=sum+f[k][m]*g[m][l];
    }
   printf("%4d",sum);
   sum=0;
  }
  printf("\n");
 }
return 0;
}

int main()
{
 int a[10][10],b[10][10],c,d,e,f;
 printf("how many rows and columns we want in a matrix\n");
 scanf("%d%d",&c,&d);
 printf("how many rows and columns we want in b matrix\n");
 scanf("%d%d",&e,&f);
if(d!=e)
 printf("mul is not possible");
else
 input(c,d,a);
 input(e,f,b);
 mul(c,d,f,a,b);
return 0;
}


 


