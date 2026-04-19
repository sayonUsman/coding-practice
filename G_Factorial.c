#include<stdio.h>

int main(){
    int test_case, num;
    long long int factorial;

    scanf("%d", &test_case);
    
    for(int i=0; i<test_case; i++){
        factorial=1;
        scanf("%d", &num);

        for(int j=num; j>1; j--){
            factorial *= j;
        }
            
        printf("%lld\n", factorial);     
    }
    
    return 0;
}