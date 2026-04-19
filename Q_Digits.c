#include<stdio.h>

int main(){
    int k, num;
    scanf("%d", &k);

    for(int i=0; i<k; i++){
       scanf("%d", &num);

       do{
            printf("%d ", num%10);
            num/=10;     
       }while(num != 0);
       
       printf("\n");
    }

    return 0;
}
