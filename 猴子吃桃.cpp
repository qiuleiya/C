#include<stdio.h>
main()
{	
    int N,x,y,i; 
		scanf("%d",&N); 
	for(i=N;i>1;i--) 
	{	x=(y+1)*2;/*��һ����������ǵ�2����������1���2��*/ 
		y=x; 
	} 
	printf("%d",x); 

} 
