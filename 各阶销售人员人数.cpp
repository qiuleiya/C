#include<stdio.h>
main()
{
	float A[1000];
	float x;
	int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,z=0;
	int i,N; 
	scanf("%d\n",&N);
	for(i=0;i<N;i++){
		scanf("%f",&A[i]);
		x=(int)(A[i]*0.09+200);
		if(x>=200&&x<=299)
		a++;
		if(x>=300&&x<=399)
		b++;
		if(x>=400&&x<=499)
		c++;
		if(x>=500&&x<=599)
		d++;
		if(x>=600&&x<=699)
		e++;
		if(x>=700&&x<=799)
		f++;
		if(x>=800&&x<=899)
		g++;
		if(x>=900&&x<=999)
		h++;
		if(x>=1000)
		z++;
	}
	printf("1)Ϊ%d��\n2)Ϊ%d��\n3)Ϊ%d��\n4)Ϊ%d��\n5)Ϊ%d��\n6)Ϊ%d��\n7)Ϊ%d��\n8)Ϊ%d��\n9)Ϊ%d��\n",a,b,c,d,e,f,g,h,z);
	
} 
