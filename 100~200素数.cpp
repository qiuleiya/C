#include<stdio.h>
#include<math.h> 
main()
{
	int i,j,k=0,b;
	for(i=100;i<=200;i++){
        b=0;
         for(j=2;j<i/2;j++)
           if(i%j==0){ 
            b=1;
            break;}
	   if(b==0){
           printf("%5d",i);
           k++;
           if(k%8==0)
           printf("\n");
         } 
	}
}
 

        
         
         
     


