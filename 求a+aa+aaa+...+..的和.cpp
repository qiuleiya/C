#include<stdio.h>
main()
{
	int a,b,n,i,Sn=0;
	scanf("a=%d,n=%d",&a,&n);
	 b=a;
	for(i=1;i<=n;i++){
	Sn+=a;
	a=a*10+b;
   }
    printf("%d",Sn);
} 
