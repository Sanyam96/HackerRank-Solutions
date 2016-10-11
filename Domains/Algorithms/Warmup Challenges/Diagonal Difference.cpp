#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int a[n][n];
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          
          scanf("%d",&a[a_i][a_j]);
       }
    }

    int sum1 = 0, sum2 = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if( i == j ){
                sum1 = sum1 + a[i][j];
            }
        }
    }

    for( int j = 0; j < n; j++){
        for(int i = 0; i < n; i++){
            if(i + j == n -1 ){
                sum2 = sum2 + a[i][j];
            }
        }
    }
    
    if(sum2 >= sum1){
        printf("%d",sum2-sum1);
        printf("\n");
    }
    else{
        printf("%d",sum1-sum2);
        printf("\n");
    }
    return 0;
}
