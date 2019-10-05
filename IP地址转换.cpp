#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>
void tran(){  
    int num=0;  
    for(int i=0; i<8; i++){  
        num = num << 1;  
        num = num | (getchar()-'0');//注重二进制及其运算的巧妙运用  
  
    }  
    printf("%d",num);  
}  
int main(){  
    tran();  
    putchar('.');  
    tran();  
    putchar('.');  
    tran();  
    putchar('.');  
    tran();  
  
    return 0;  
} 
