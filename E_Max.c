#include<stdio.h>
#include<limits.h>

int main(){
    int j, num, max=INT_MIN;
    scanf("%d", &j);

    for(int i=0; i<j; i++){
       scanf("%d", &num);

       if(num>max){
            max=num;
       }
    }
    
    printf("%d\n", max);

    return 0;
}