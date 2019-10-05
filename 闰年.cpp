#include<stdio.h>
main()
{
	int a,i,j=0;
	scanf("%d",&a);
	if(a<=2000||a>2100)
		 printf("Invalid year!");
	else if(a>2000&&a<2004)
		 	printf("None");
	else 
	for(i=2001;i<=a;i++)
	  if((i%4==0 && i%100!=0)||(i%400==0))
	     printf("%d\n",i);
	 
    
}




