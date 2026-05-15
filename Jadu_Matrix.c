// Problem Statement

// You will be given a matrix of size N * M. You need to tell if it is Jadu Matrix or not.

// Note: A Jadu Matrix is a square matrix, where the values of primary diagonal and secondary diagonal are 1. Rest of the cell will contain only 0.

// Input Format

// First line will contain N, the row and M, the column of the matrix.
// Then the N * M sized matrix will be given.
// Constraints

// 1 <= N, M <= 100
// 0 <= Values <= 100

// Output Format

// Ouput "YES" if the matrix is Jadu Matrix, otherwise output "NO" without the quotation marks.

// Sample Input 0

// 5 5
// 1 0 0 0 1
// 0 1 0 1 0
// 0 0 1 0 0
// 0 1 0 1 0
// 1 0 0 0 1

// Sample Output 0
// YES

// Sample Input 1

// 5 5
// 1 0 0 0 1
// 0 1 0 1 0
// 0 0 0 0 0
// 0 1 0 1 0
// 1 0 0 0 1

// Sample Output 1
// NO

// Sample Input 2

// 5 5
// 1 0 0 0 1
// 0 1 0 1 0
// 0 0 1 0 1
// 0 1 0 1 0
// 1 0 0 0 1

// Sample Output 2
// NO

// Sample Input 3

// 5 5
// 2 0 0 0 1
// 0 1 0 1 0
// 0 0 1 0 0
// 0 1 0 1 0
// 1 0 0 0 1

// Sample Output 3
// NO

// Sample Input 4

// 6 6
// 1 0 0 0 0 1 
// 0 1 0 0 1 0 
// 0 0 1 1 0 0 
// 0 0 1 1 0 0 
// 0 1 0 0 1 0 
// 1 0 0 0 0 1 

// Sample Output 4
// YES



// Solution
#include<stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];
    int is_Jadu=1;

    for (int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    if(n==m){
        for (int i=0; i<n; i++){
            if(is_Jadu == 0){
                break;
            }
            
            for(int j=0; j<m; j++){
                if(i!=j){
                    if(i+j==n-1){
                        if(arr[i][j] == 1){
                            is_Jadu=1;
                        }
                        else{
                            is_Jadu=0;
                            break; 
                        }
                    }
                    else if(arr[i][j] == 0){
                        is_Jadu=1;
                    }
                    else{
                        is_Jadu=0;
                        break;
                    }
                }
                else{
                    if(arr[i][j] == 1){
                        is_Jadu=1;
                    }
                    else{
                        is_Jadu=0;
                        break;
                    }
                }         
            }
        }

        if(is_Jadu == 1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    else{
        printf("NO\n");
    }
    
    return 0;
}
