#include<stdio.h>

int main(){
    int size;
    scanf("%d", &size);

    int a[size+1];
    for(int i=0; i<size; i++){
        scanf("%d", &a[i]);
    }

    int idx, val;
    scanf("%d %d", &idx, &val);

    for(int i=size; i>idx; i--){
        a[i]=a[i-1];
    }

    a[idx]=val;
    for(int i=0; i<=size; i++){
        printf("%d ", a[i]);
    }
    
    return 0;
}
