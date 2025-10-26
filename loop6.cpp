#include<stdio.h>
int main(){
    int n, num;

    scanf("%d", &n);

    int sum = 0;

    for (int i = 1; i <= n; i++){
        scanf("%d", &num);
        sum += num;
        printf("i = %d\n", i);
        printf("sum = %d\n", sum);
    }
    float avg = (float)sum / n;

    printf("avg = %.2f", avg);

}
