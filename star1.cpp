#include<stdio.h>
main(){

    int n = 7;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            //printf("%d,%d ", i, j);
            if(i <= j && i + j <= n + 1){//ส่วนบน
                printf("*");
            }
            else if(j <= i && i + j >= n + 1){//ส่วนล่าง
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

}
