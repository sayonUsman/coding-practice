#include<stdio.h>
#include<limits.h>

int main(){
    int size;
    scanf("%d", &size);

    int a[size];
    for(int i=0; i<size; i++){
        scanf("%d", &a[i]);
    }

    int min=INT_MAX, max=INT_MIN, min_idx, max_idx, tmp;

    for(int i=0; i<size; i++){
        if(a[i]>max){
            max=a[i];
            max_idx=i;
        }
    
        if(a[i]<min){
            min=a[i];
            min_idx=i;
       }
    }

    tmp=a[max_idx];
    a[max_idx]=a[min_idx];
    a[min_idx]=tmp;

    for(int i=0; i<size; i++){
        printf("%d ", a[i]);
    }

    return 0;
}
