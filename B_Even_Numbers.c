#include<stdio.h>

int main(){
    int num;
    scanf("%d", &num);

    if(num == 1){
        printf("%d\n", -1);
    }
    else{
        if(num%2 != 0){
            num -= 1;
        }
        
        for(int i=2 ; i<= num; i+=2){
            printf("%d\n", i);
        }
    }

    return 0;
}
