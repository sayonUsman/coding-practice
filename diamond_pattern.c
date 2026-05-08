#include<stdio.h>

int main(){
    int size;
    scanf("%d", &size);

    int count = size * 2 - 1;
    int count2 = size-1;
    int k=1;

    for(int i = 0; i < count; i++){
        for(int j=count2; j>0; j--){
            printf(" ");
        }

        for(int j=1; j<=k; j++){
            if(i%2==0){
                printf("#");
            }
            else{
                printf("-");
            }
        }

        if(i>=size-1){
            k-=2;
            count2++;

        }
        else{
            k+=2;
            count2--;
        }
        
        printf("\n");
    }
    
    return 0;
}
