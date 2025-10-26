#include<stdio.h>
main(){

    int n;
    printf("N: ");
    scanf("%d", &n);

    int data[n] = {};
    for(int i = 0; i < n; i++){
        printf("   ");
        scanf("%d", &data[i]);
    }

    int max = data[0];
    for(int i = 0; i < n; i++){
        if(data[i] > max) max = data[i];
    }

    /*int temp;
    for(int j = 0; j < n-1; j++){
        for(int i = 0; i < n-1; i++){
            if(data[i] < data[i+1]){
                temp = data[i];
                data[i] = data[i+1];
                data[i+1] = temp;
            }
        }
    }*/

    for(int j = max; j >= 0; j--){
        printf("\t");
        for(int i = 0; i < n; i++){
            if(data[i] > j){
                printf("M\t");
            }
            else if(data[i] == j){
                printf("%d\t", data[i]);
            }
            else {
                printf("\t");
            }
        }
        printf("\n");
    }

    printf("\t");
    for(int i = 0; i < n; i++){
        printf("-\t");
    }
    printf("\n");

    for(int j = 0; j <= max; j++){
        printf("\t");
        for(int i = 0; i < n; i++){
            if(data[i] > j){
                printf("W\t");
            }
            else if(data[i] == j){
                printf("%d\t", data[i]);
            }
            else {
                printf("\t");
            }
        }
        printf("\n");
    }
}
