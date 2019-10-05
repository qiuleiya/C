#include<stdio.h>
#include<math.h>
void main()
{
	 float x,s=0;
  	 int n,i,k,a=1,b;
  	 printf("Input x,n:"); 
  	 
   	 scanf("%.3f",&x,&n); 
   	 
   	   for(i=1;i<=n;i++) 
      {  a*=2*n-1; 
    	 b=pow(-1,i-1); 
   		 s=s+b*pow(x,2*i-1)/(double)a; 
	  	 a*=2*n;
	  } 
	  
	  printf("sinx=%.3f\n",s);
	  
}
