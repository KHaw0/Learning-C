#include<stdio.h>
main(){

    int n;

    printf("N : ");
    scanf("%d", &n);

    int center;

    if(n % 2 == 0){
        center = n / 2;
    }else{
        center = n / 2 + 1;
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            //printf("%d,%d ", i, j);
            if(i == j && j <= center){
                printf("*");
            }else if (i + j == n + 1 && j >= center){
                printf("*");
            }else if(j == center && i >= center){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

}
