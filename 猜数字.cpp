#include<stdio.h>
int main()
{
        int num,chance;
        int count = 0;
        int a = 0;
        scanf("%d %d",&num,&chance);
        do{
                scanf("%d",&a);
                count++;
                if(count>chance||a<0){
                        printf("Game Over");
                        break;
                }else{
                        if(a>num){
                                printf("Too big\n");
                        }else if(a<num){
                                printf("Too small\n");
                        }else if(a==num&&count==1){
                                printf("Bingo!");
                                break;
                        }else if(a==num&&count<=3){
                                printf("Lucky You!");
                                break;
                        }else{
                                printf("Good Guess!");
                                break;
                        }
                }
        } while(a!=num);
        return 0;
}
