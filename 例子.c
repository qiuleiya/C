#include<stdio.h>
int main()
{
	int n,i;
	double sum=0.0; 
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		if(i/2==0)
	sum-=1.0/i;
	  if(i/2!=0)
	  sum+=1.0/i;
	}
	
	printf("%f",sum);
	return 0;
	} 
