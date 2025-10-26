#include <stdio.h>

int main (){

    int n = 0, sum = 0, result, variance = 0;
    float avg, result2;
    scanf("%d", &n);

    int num[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &num[i]);
        sum += num[i];
    }
    avg = sum / n;
    printf("%.2f\n", avg);

    for (int i = 0; i < n; i++){
        result = num[i] - avg;
        variance += result*result;
    }
    result2 = variance / n;
    printf("%.2f", result2);
}
