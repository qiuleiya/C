#include<stdio.h>
main()
{
	int i,j,k,l,repeat,n,m;
	scanf("%d",&repeat);
	for(i=1;i<=repeat;i++)
	{
		scanf("%d",&n);
		int a[5]={0};
		for(j=1;j<=n;j++)
		{
			scanf("%d",&m);
			switch(m)
			{
				case 1:a[0]++;break;
				case 2:a[1]++;break;
				case 3:a[2]++;break;
				case 4:a[3]++;break;
				case 5:a[4]++;break;
			}
		}
		for(k=0;k<5;k++)
		{
			printf("%d:",k+1);
			for(l=1;l<=a[k];l++)
				printf("*");
			printf("\n");
		}
	}	
}
