#include <stdio.h>

int main (){

    int n;

    scanf("%d", &n);

    int x[n];

    for (int i = 0 ; i < n ; i++){
        scanf("%d", &x[i]);
    }

    int max = x[0];
    for (int i = 0 ; i < n ; i++){
        if ( x[i] > max) {
            max = x[i];
        }
    }
    int y;
    for (int i = max ; i >= 1 ; i--){

        for (int j = 0 ; j < n ; j++){
            y = x[i];
            printf("%d,%d\t", y , i);
            // if ( i <= x[i]){
            //     printf("*\t");
            // }else {
            //     printf("\t");
            // }
        }
        printf("\n");
    }

    for (int i = 0 ; i < n ; i++){
        printf("%d\t", x[i]);
    }
}
