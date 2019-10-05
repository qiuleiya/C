0#include<stdio.h>  
main()  
{  
    int N,month=1;  
    int sum=1;  
    int now=0,pre=0;  
    scanf("%d",&N);  
    if(N==sum){  
        printf("%d\n",month);  
    }else{  
        month++;  
        now=pre+sum;  
        while(now<N){  
            month++;  
            pre=sum;  
            sum=now;  
            now=pre+sum;  
        }  
        printf("%d\n",month);  
          
    }  
    return 0;  
}  
