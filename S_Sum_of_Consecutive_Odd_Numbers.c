#include<stdio.h>

int main(){
    int test_case, x, y, sum;
    scanf("%d", &test_case);

    for(int i=0; i<test_case; i++){
        scanf("%d %d", &x, &y);

        if(x>y)
        {
            int num;
            num=x;
            x=y;
            y=num;
        }
        
        sum=0;

        for(int j=x+1; j<y; j++){
            if(j%2 != 0){
                sum += j;
            }
        }

        printf("%d\n", sum);
    }
    return 0;
}
