#include<stdio.h>

int main(){
    int size;
    scanf("%d", &size);

    int a[size];
    for(int i=0; i<size; i++){
        scanf("%d", &a[i]);
    }

    int idx;
    scanf("%d", &idx);

    for(int i=idx; i<size-1; i++){
        a[i]=a[i+1];
    }

    for(int i=0; i<size-1; i++){
        printf("%d ", a[i]);
    }
    
    return 0;
}
