#include<stdio.h>
main()
{
	int i,j,sum;
	for(i=2;i<1000;i++){
		sum=0;  //��������ѭ���� 
	   for(j=1;j<i;j++){
	       if(i%j==0)
	        sum+=j;
       }
    if(i==sum)
    printf("%5d",i);
    }
    return 0;
} 
