#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap(int *x ,int *y){
    int a= *x;
    *x=*y;
    *y=a; 
}

int main(void){ 

    int a =0,b=1;
    swap(&a,&b);
    printf("%d,%d",a,b);

}