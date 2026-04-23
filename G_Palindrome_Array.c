#include<stdio.h>

int main(){
    int size;
    scanf("%d", &size);

    int a[size];
    int isPalindrome=1;
    
    for(int i=0; i<size; i++){
        scanf("%d", &a[i]);
    }

    for(int i=0, j=size-1; j>=0; i++, j--){
        if(a[i] != a[j]){
            isPalindrome=0;
            printf("NO");
            break;
        }
    }

    if(isPalindrome==1){
        printf("YES");
    }
    
    return 0;
}
