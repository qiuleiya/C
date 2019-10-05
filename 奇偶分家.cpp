#include<stdio.h>
main()
{
   int N,i,o=0,q;
   int a[1001];
   scanf("%d\n",&N);
   for(i=0;i<N;i++){
   scanf("%d ",&a[i]);
   if(a[i]%2==0)
   o++;
   else
   q++;
}
   printf("%d %d\n",q,o);
   return 0;
} 


