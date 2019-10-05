#include <stdio.h>  
int main(void) {  
    int x,y;  
    char ch;  
    scanf("%d %c %d", &x, &ch, &y);  
    switch(ch){  
        case '+':  
            printf("%d\n",x+y);  
            break;  
        case '-':  
            printf("%d\n", x-y);  
            break;  
        case '*':  
            printf("%d\n", x*y);  
            break;  
        case '/':  
            printf("%d\n", x/y);  
            break;  
        case '%':  
            printf("%d\n", x%y);  
            break;  
        default:  
            printf("ERROR\n");  
            break;  
    }  
    return 0;  
} 
