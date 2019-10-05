 #include<stdio.h>  
  
int main(£©  
{  
    int day,month,year;  
    scanf("%d/%d/%d",&year,&month,&day);  
    int i;  
    int sum;  
    sum=day;  
    for(i=1;i<month;i++){  
        switch(i){  
            case 1:sum+=31;break;  
            case 3:sum+=31;break;  
            case 5:sum+=31;break;  
            case 7:sum+=31;break;  
            case 8:sum+=31;break;  
            case 10:sum+=31;break;  
            case 12:sum+=31;break;  
            case 4:sum+=30;break;  
            case 6:sum+=30;break;  
            case 9:sum+=30;break;  
            case 11:sum+=30;break;  
            case 2:  
                if((year%4==0&&year%100!=0)||(year%400==0)){  
                    sum+=29;  
                }else{  
                    sum+=28;  
                }  
        }  
    }  
    printf("%d\n",sum);   
    return 0;  
}



