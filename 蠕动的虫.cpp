#include<stdio.h>
main()
{
    int n,u,d,a,b,t;


    scanf("%d%d%d",&n,&u,&d);
    	a=(n-u)/(u-d);
    	b=(n-u)%(u-d);
    if(n<=u)
		t=1;
    else if(b>0)
		t=(a+1)*2+1;
    else if(b==0)
		t=(a)*2+1;
		
    	printf("%d",t);
    	return 0;
} 

