#include <stdio.h>
int Ack( int m, int n );
int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    printf("%d\n", Ack(m, n));

    return 0;
}
int Ack(int m,int n)
{/*Ackerman�ݹ麯��*/
    if(m<0||n<0)
    {
        printf("��������!\n");
        return -1;
    }
    if(m==0)
        return n+1;
    else if(m!=0&&n==0)
        return Ack(m-1,1);
    else
        return Ack(m-1,Ack(m,n-1));
}
