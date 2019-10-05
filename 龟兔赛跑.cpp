#include <stdio.h>
#include <stdlib.h>
int main()
{
   int t,tu=0,gui,i=0,d;
   scanf("%d",&t);
   while(i<t){
     if(tu>gui){
         if(i+30>t)break;
         i=i+30;gui=3*i;}
     else if(tu<=gui){
         if(i+10>t)break;
         i=i+10;tu=tu+90;gui=3*i;}
   }
   d=t-i;
   if(tu>gui){gui=gui+d*3;}
   else if(tu<=gui){tu=9*d+tu;gui=gui+3*d;}

   if(tu==gui)printf("-_- %d",tu);
   if(tu>gui)printf("^_^ %d",tu);
   if(tu<gui)printf("@_@ %d",gui);
    return 0;
}
