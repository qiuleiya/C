#include <stdio.h>
#include <stdlib.h>
int main()
{
     char s1[80],s2[80];
     int i=0,j=0,n1=0,n2=0,cont;
     for(i=0;;i++){
         scanf("%c",&s1[i]);
         if(s1[i]=='\n')break;
         n1++;
     }
     for(i=0;;i++){
         scanf("%c",&s2[i]);
         if(s2[i]=='\n')break;
         n2++;
     }
         for(i=0;i<n1;i++){
            if(s1[i]==s2[0]){
                cont=0;
                for(j=0;j<n2;j++){
                    if(s1[i+j]!=s2[j])cont=1;
                }
                if(cont==0){
                    n1=n1-n2;
                    for(j=i;j<n1;j++){
                    s1[j]=s1[j+n2];
                    }
                   i=-1;
                   s1[n1]='\0';
                }
            }
         }


   for(i=0;i<n1;i++){
     printf("%c",s1[i]);}
    return 0;
}
