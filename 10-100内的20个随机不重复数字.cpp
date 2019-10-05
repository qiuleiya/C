#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a[20];
	int i,j;
	srand((int)time(NULL));
	for(i=0;i<20;i++)
	{
		a[i]=rand()%90+10;
		for(j=0;j<i;j++)
		if(a[i]==a[j])
		i--;
	}
	for(i=0;i<20;i++)
	printf("%5d",a[i]);
}
