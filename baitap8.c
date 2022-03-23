#include<stdio.h>
int main(){
    int n,i,num,max,min;
    printf("nhap vao so n = ");
    scanf("%d",&n);
    printf("nhap nhung so can xac dinh :\n");
    for(i=0;i<=n;i++){
        
        scanf("%d",&num);
        if(i==0){
            max=num;
            min=num;
            }
            if(i>0 && num>max){
                max=num;}
            if(i>0 && num<min){
                min=num;}
                }
                printf("so lon nhat %d\n",max);
                printf("so nho nhat %d",min);


    }
