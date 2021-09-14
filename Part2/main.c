#include<stdio.h>
#define MAXSIZE 100
typedef int elemtype;
typedef struct
{
    //this type is "int" so we can find elements just by value
    elemtype elem[MAXSIZE];
    int last;
}sqlist;


void init_sqlist(sqlist *L){
    //init sqlist
    L->last  = -1;
}

void createsqlist(sqlist *L){
    //create a new list
    int i;
    printf("please input how much number you need to input:");
    scanf("%d",&(*L).last);
    L->last--;
    for(i=0;i<=(L->last);i++){
        scanf("%d",&(L->elem[i]));
    }
}

int Location_sqlist(sqlist *L,int x){
    int i = 0;
    while (i<=L->last && L->elem[i]!=x)
    {
        i++;   
    }
    if (i>L->last) return -1;
    else return i; //return save place in tuple odery by zero

}

int InsList(sqlist *L,int x){
    //insert element by ordery
    int i = 0,K;
    if(L->last == -1){
        return -1;
    }
    while (x>L->elem[i]&&i<=L->last)
    {
        i++;
        //this circulation is that get index number in elem tuple

    }
    for(K=L->last;K>=i;K--)
    {
        L->elem[K+1]=L->elem[K];
    }
    L->elem[i]=x;
    L->last++;
    
}

int DeLlist(sqlist *L,int i){
    int index = i-1;
    int delnum = -1;
    if(index>=0&&index<=L->last){
        delnum  = L->elem[index];
        for(;index<=L->last;index++){
            L->elem[index]=L->elem[index+1];
        }
        
    }
    L->last --;
    return delnum;
}

void List(sqlist L){
    printf("\n");
    for(int i=0;i<=L.last;i++){
        printf("%d\t",L.elem[i]);
    }
    printf("\n");
}

void insertList(sqlist *L,int i,int x){

    //insert elemnet in i and value is x
    int a = 0,k,index;
    index = i-1;
    if(index>=0&&index<=L->last){
        for(k=L->last;k>=i;k--){
            L->elem[k+1]=L->elem[k];
        }
        L->elem[index]=x;
        L->last++;
    }
    

}




int main(){
    int i;
    sqlist L;
    //init sqlList
    init_sqlist(&L);
    //create sqlist
    createsqlist(&L);
    List(L); //travese sqlist
    i = Location_sqlist(&L,3)+1;
    if(i==0){
        printf("\nno find\n");
    }
    else{
        printf("\npostion is %d\n",i);
    }
    InsList(&L,2);
    InsList(&L,6);
    List(L);
    DeLlist(&L,1);
    DeLlist(&L,6);
    List(L);
    return 0;
}
