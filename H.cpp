#include<stdio.h>
int main(){

    int H, M, X, H2, M2;

    printf("H: ");
    scanf("%d",&H);
    printf("M: ");
    scanf("%d",&M);
    printf("X: ");
    scanf("%d",&X);

    if (M >= 60) {
        H++;
        M = M - 60;
    }printf("start=%d:%d\n", H, M);
    if (M % 2 == 1){
        M = M + X;
    }M = M + 30;
    if (M >= 60) {
        H++;
        M = M - 60;
    }printf("next stop=%d:%d\n", H, M);
    if (M <= 60) {
        H = 0;
    }

    printf("total time[s]=%d",H * 3600 + M * 60);


}
