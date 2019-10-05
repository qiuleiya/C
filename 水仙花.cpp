/*4-1. 水仙花数
水仙花数是指一个N位正整数（N>=3），它的每个位上的数字的N次幂之和等于它本身。例 如：153 = 13 + 53+ 33。 本题要求编写程序,计算所有N位水仙花数。
输入格式：
输入在一行中给出一个正整数N（3<=N<=7）。
输出格式：
按递增顺序输出所有N位水仙花数，每个数字占一行。
输入样例：
3
输出样例：
153
370
371
407*/ 

#include<stdio.h>
#include<math.h>
int main(){
        int n;
        scanf("%d",&n);
        int i,j;
        int a = (int) pow(10,(n-1)); 
        int b = (int) pow(10,n);
        for(i=a;i<b;i++){
                
                int temp = i;
                int sum = 0;
                for(j=0;j<n;j++){
                        sum += pow(temp%10,n);
                        temp /= 10;
                }
                if(sum==i){
                        printf("%d\n",sum);
                }
        }
      
}
