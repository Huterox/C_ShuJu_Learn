#include<stdio.h>
#include<string.h>
int main_3(){
    int func(char str[]);
    char str[]="";
    scanf("%s",str);
    func(str)?printf("yes\n"):printf("no\n");

    return 0;
}

int func(char str[]){
<<<<<<< HEAD:Part1/Part_T3.c
=======

>>>>>>> 196c8886b584679f7a9bd20217aaa79dc4dcd559:Part_T3.c
    int len = strlen(str)-1;
    int i=0,j=len;
    for(;i<=j;i++,j--){
        if(str[i]!=str[j]){
<<<<<<< HEAD:Part1/Part_T3.c

=======
>>>>>>> 196c8886b584679f7a9bd20217aaa79dc4dcd559:Part_T3.c
            return 0;
        }
    }
    return 1;
<<<<<<< HEAD:Part1/Part_T3.c
}
=======
}
>>>>>>> 196c8886b584679f7a9bd20217aaa79dc4dcd559:Part_T3.c
