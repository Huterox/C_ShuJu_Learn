#include<stdio.h>
typedef struct
{
    int xh; float gs; float wy; float jsj; float zf;
}student;

int main_1(){

    student a[6]; int i;
    for(i=0;i<6;i++){
        a[i].xh=(i+1);
    }
    for(i=1;i<6;i++){
        printf("please input gs:");
        scanf("%f",&a[i].gs);
        printf("please input wy:");
        scanf("%f",&a[i].wy);
        printf("please input jsj:");
        scanf("%f",&a[i].jsj);
    }
    for(i=1;i<6;i++){
        a[i].zf = a[i].gs+a[i].wy+a[i].jsj;
    }
    for(i=1;i<6;i++){
        printf("%3d",i);
        printf("%3f\n",a[i].zf);
    }
    return 0;
}