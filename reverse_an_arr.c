#include<stdio.h>

int main(){
    int size;
    scanf("%d", &size);

    int a[size];
    for(int i=0; i<size; i++){
        scanf("%d", &a[i]);
    }

    int i=0;
    int j=size-1;

    while(i<j){
        int tmp=a[i];
        a[i]=a[j];
        a[j]=tmp;
        i++;
        j--;
    }
   
    for(int i=0; i<size; i++){
        printf("%d ", a[i]);
    }
    
    return 0;
}
