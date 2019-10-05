#include<stdio.h> 
main()
{
	int a,b,i,x1,x2,y1,y2;
	scanf("%d %d",&a,&b);
	for(i=1;;i++)
	{	x1=i/a;
		x2=i/b;
	 	y1=i%a;
		y2=i%b;	
		if(x2>=1&&x2>=1&&y1==0&&y2==0)
		
			break;
	}
	printf("%d",i);
}
