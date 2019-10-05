#include<stdio.h>
#include<math.h>
main()
{
   int a,k,b,sum=0;
   scanf("%d",&a); 
   while(a!=0){
   k=a%10;
   b=pow(k,2);
   sum+=b;
   a=a/10;
}
   printf("%d",sum);
   return 0;
}
