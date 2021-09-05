#include<stdio.h>
#include<string.h>
int main(){
    int func(char str[]);
    char str[]="";
    scanf("%s",str);
    func(str)?printf("yes\n"):printf("no\n");

    return 0;
}

int func(char str[]){
    int flag = 1;
    int len = strlen(str);
    int i=0,j=len;
    for(;i<len;i++,j--){
        if(str[i]!=str[j] || i>j){
            flag = 0;
            break;
        }
    }
    return flag;
}