#include<stdio.h>
int main(){
    int sum(int sum);
    int num;
    int s;
    scanf("%d",&s);
    s = sum(num);
    printf("%d\n",s);
    
    return 0;
}

int sum(int num){
    int s=0;
    if num:
        while (num)
        {
            s+=(num%10);
            num/=10;
        }
    
    return s;
}

