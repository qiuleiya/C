#include<stdio.h>
int main()
{
	int num,i,j,a=0;
	scanf("%d",&num);
	for(i=2;i<num;i++){
		j=num%i;
		if(j==0){
		   a=1;
		   break;
	    }
	}
	if(a==1)
		printf("no\n");
	else
	    printf("yes\n");
	
} 
