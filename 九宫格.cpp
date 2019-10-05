#include <stdio.h>  
#include <stdlib.h>  
#include"string.h"  
int main()  
{  
   char *key[10]={"0 ","1,.?!","2ABC","3DEF",  
 "4GHI","5JKL","6MNO",  
 "7PQRS","8TUV","9WXYZ"  
   };  
   int length[10];  
   for(int i=0;i<10;i++){  
       length[i]=strlen(key[i]);  
   }  
   char ch;  
   char p;  
   int count=0;  
   do{  
      ch=getchar();  
      if(ch!=' '&&ch!='\n'){  
          p=ch;  
          count++;  
      }  
      else{  
          putchar(key[p-'0'][(count-1)%length[p-'0']]);/*Ñ­»·¼õÒ»*/  
          count=0;  
      }  
   }while(ch!='\n');  
  
    return 0;  
} 
