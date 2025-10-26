#include<stdio.h>
int main(){
    int n, num;

    scanf("%d", &n);

    int sum = 0;
    int i = 1;

    while(i <= n){
        scanf("%d", &num);
        sum += num;
        i++;
        printf("i = %d\n", i);
        printf("sum = %d\n", sum);
    }

    float avg = (float)sum / n;

    printf("sum = %d\n", sum);
    printf("avg = %.2f", avg);

}
