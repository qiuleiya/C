#include<stdio.h>
main()
{
   int i,j,k=0,x=0,a;
   for(i=100;i<200;i++)
     for(j=2;j<i/2;j++)
       a=i%j;
       if(a==0)
         x=1;
       else{ 
       printf("%d\t",i);
        k++;
       }
       if(k%8==0)
       printf("\n");
}

