#include<stdio.h>
main()
{
	int i,j,k;
	for(i=1;i<=9;i++){ 
	   for(j=1;j<=i;j++)
	   	   printf("%d*%d=%-3d\t",i,j,i*j);
	   	   for(k=1;k<=i;k++)
	   	   if(k=i)
	   	   printf("\n");
	   } 
} 
