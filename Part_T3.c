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

    int len = strlen(str)-1;
    int i=0,j=len;
    for(;i>j;i++,j--){
        if(str[i]!=str[j] || i>j){
            return 0;
        }
    }
    return 1;
}
