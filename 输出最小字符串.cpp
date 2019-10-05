#include<stdio.h>
#include<string.h>
#define n 80 
main()
{
	int N,i;
	scanf("%d",&N);
	char str[n],min[n];

	printf("ÊäÈë×Ö·û£º"); 
	gets(str);
	strcpy(min,str);
	for(i=1;i<=N;i++)
	{
		gets(str);
		if(strcmp(str,min)<0)
		{
			strcpy(min,str);
		}
	}	
	printf("Min is:");
	puts(min);
} 
