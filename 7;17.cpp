#include<stdio.h>
main()
{
   int a,i,sum=0,j=0;
   for(i=1;i<300;i++)
   if(i%2==0)
   if((i%7==0)||(i%17==0)){
   sum=i+sum; 
   j++;
   printf("%3d\t",i);
   if(j%6==0)
   printf("\n");

   }
   printf("sum=%d",sum);
}
