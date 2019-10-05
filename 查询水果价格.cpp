#include<stdio.h>
main()
{
	int a[5],i;
	printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
	 
	for(i=0;i<5;i++){
	   scanf("%d",&a[i]);
	   if(a[i]==0)
	   break;
	   else
	   {
	   	switch(a[i]){
	       case 1:
	         printf("price = 3.00\n");break;
	       case 2:
	         printf("price = 2.50\n");break;
	       case 3:
	         printf("price = 4.10\n");break;
	       case 4:
        	 printf("price = 10.20\n");break;
               default:
		     printf("price = 0.00\n");break;
	     }
	 }
		 }
	     
}
 

