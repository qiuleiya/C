#include <stdio.h>

#define MAXN 10

double f( int n, double a[], double x );

int main()
{
    int n, i;
    double a[MAXN], x;
				
    scanf("%d %lf", &n, &x);
    for ( i=0; i<=n; i++ )
        scanf(“%lf”, &a[i]);
    printf("%.1f\n", f(n, a, x));
    return 0;
}
double f( int n, double a[], double x )
{
    int i;
    double  A=1.0,sum=0;
    for(i=0;i<=n;i++)  {
         sum+=a[i]*A;
         A*=x;
     }
   return  sum;
}

/* 你的代码将被嵌在这里 */
