#include<stdio.h>
int main()
{
 int a[10],i;
 printf("enter numbers\n");
 for(i=0;i<10;i++)
 { 
  scanf("%d",&a[i]);
  printf("a[%d]*a[%d]=%d\n",i,i,a[i]*a[i]);
}
return 0;
}
