#include<stdio.h>
int addrec(int a,int b)
{
 int keep=(a&b)<<1;
 int res=a^b;
 if(keep==0)
  return res;
 else
  addrec(keep,res);
}
 int main()
 { 
   int a,b;
   printf("enter two numbers");
  scanf("%d %d",&a,&b);
  printf("result is %d",addrec(a,b));
return 0;
}
