#include<stdio.h>
main()
{
	int i,n;
	double a,sum;
	scanf("%lf %d",&a,&n);
	sum=a;
	for(i=1;i<n;i++){
		a=a/2;
	    sum+=a*2;
		}
		a=a/2;
	printf("%.1f %.1f",sum,a);
		
} 
