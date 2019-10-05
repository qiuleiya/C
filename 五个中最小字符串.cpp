#include<stdio.h>
#include<string.h>
#define n 80
main() 
{
	int i,num;
	char str[n],min[n];
	/*gets(str);
	strcpy(min,str);*/
	for(i=1;i<num;i++)
	{
		scanf("%d",&num);
		gets(str);
		if(strcmp(str,min)<0){
			strcpy(min,str);
		}
	}
	printf("min is:");
	puts(min);
	
}
 
