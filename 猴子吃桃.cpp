#include<stdio.h>
main()
{	
    int N,x,y,i; 
		scanf("%d",&N); 
	for(i=N;i>1;i--) 
	{	x=(y+1)*2;/*第一天的桃子数是第2天桃子数加1后的2倍*/ 
		y=x; 
	} 
	printf("%d",x); 

} 
