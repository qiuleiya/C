#include<stdio.h>
#include<math.h>
main()
{
	int a,b,d;
	char c;
	scanf("%d %c %d",&a,&c,&b);
	switch(c){
		case'+':
			d=a+b;
			break;
		case'-':
			d=a-b;
			break;
		case'*':
			d=a*b;
			break;
		case'/':
			d=a/b;
			break;
		default:
			printf("ERROR");
			break; 
	}
	printf("%d %c %d=%d",a,c,b,d);
}
