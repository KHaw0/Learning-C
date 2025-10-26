#include<stdio.h>
main(){

    int n;

    printf("N : ");
    scanf("%d", &n);

    int weight;
    float sum = 0;
    int i = 1;
    int m = 0, g = 0, o = 0;
    double avg;

    while(i <= n){
        printf("Weight : ");
        scanf("%d", &weight);

        if(weight < 45){
            printf("%d \t\"Malnutrition\"\n", weight);
            m = m + 1;
        }else if(weight <= 70){
            printf("%d \t\"Good nutrition\"\n", weight);
            g = g + 1;
        }else{
            printf("%d \t\"Over nutrition\"\n", weight);
            o = o + 1;
        }
        avg = avg + (double)weight / n;
        i = i + 1;
    }

    printf("Malnutrition =%d\n", m);
    printf("Good nutrition =%d\n", g);
    printf("Over nutrition =%d\n", o);
    printf("Average Weight=%f\n", avg);

}
