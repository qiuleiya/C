#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>  
#include <string.h>
  
int main()  
{  
   char *p[4],str[20];  
   int i;  
   for(i=0;i<=3;i++){  
       gets(str);  
       p[i]=(char *)malloc(sizeof(str)+1);  
       strcpy(p[i],str);  
  
   }  
  
   int n;  
  
   for(i=0;i<=3;i++){  
      n=strlen(p[i]);  
      printf("%s",p[i]+n-2);  
   }  
  
   return 0;  
}
