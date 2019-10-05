#include <stdio.h>
 main()
{
    int a,b;

    int s[100];
    int N;
    int A=0,B=0,t,i;
    scanf("%d%d",&a,&b);
    scanf("%d",&N);
    while(N--){
        for(i=1;i<=4;i++)
         	gets(s[i]);
              t=s[1]+s[3];
                if(s[2]==t&&s[4]!=t)
                {
                    A++;
                }
                if(s[4]==t&&s[2]!=t)
                
                    B++;
                }
                if(A>a||B>b)
                    break;

         }
        if(A>a)
        {
            printf("A\n");
            printf("%d\n",B);
        }
        if(B>b)
        {
            printf("B\n");
            printf("%d\n",A);
        }

    return 0;
}
