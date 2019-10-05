#include<stdio.h>
main()
{
	float a,i,sum=0;
	for(i=1;i<20;i++){
	  a=1/(i*(i+1));
	  sum+=a;
    }
    printf("%d",sum);
} 
