#include<stdio.h>
main()
{
	int i;
	for(i=21; ;i++){
	if(i%5==1 && i%6==5 && i%7==4 && i%11==10)
	break;}
	printf("%d",i);
} 
