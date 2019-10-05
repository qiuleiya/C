#include<stdio.h>
main()
{
   int a,k;
   scanf("%d",&a); 
   while(a!=0){
   k=a%10;
   a=a/10;
   printf("%d",k);
}
   return 0;
}
