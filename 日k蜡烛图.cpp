#include<stdio.h>  
int main()  
{  
    double open,high,low,close;  
    scanf("%lf%lf%lf%lf",&open,&high,&low,&close);  
    if(close<open){  
        printf("BW-Solid");  
          
    }else if(close>open){  
        printf("R-Hollow");  
    }else if(close==open){  
        printf("R-Cross");  
    }  
      
    if((low<open&&low<close)&&(high>open&&high>close)){  
        printf(" with Lower Shadow and Upper Shadow\n");  
    }else if(low<open&&low<close){  
        printf(" with Lower Shadow\n");  
    }else if(high>open&&high>close){  
        printf(" with Upper Shadow\n");  
    }  
    return 0;  
} 
