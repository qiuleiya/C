#include<stdio.h>
int main()
{
	int x,i,j,k,count=0;
	scanf("%d",&x);
	if(x<100&&x>8){
      for(i=100;i>0;i--){
		for(j=100;j>0;j--){
			for(k=100;k>0;k--){
				if(5*i+2*j+k==x){
				   count++;
				   printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",i,j,k,i+j+k);
			    }
			}
		}
	  } 
	printf("count = %d",count);
	}
}
