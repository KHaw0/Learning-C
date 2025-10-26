#include<stdio.h>
main(){

    int n;
    printf("N : ");
    scanf("%d", &n);

    int weight[n] = {};
    for(int i = 0; i < n; i++){
        printf("weight[%d] : ", i + 1);
        scanf("%d", &weight[i]);
    }

    int vat;
    int t = 0, h = 0, f = 0, sum = 0;
    printf("weight\tgroup\tvat\n");
    for(int i = 0; i < n; i++){
        printf("%d\t", weight[i]);
        vat = 0;
        if(weight[i] >= 1 && weight[i] <= 45){
            printf("Thin\t");
            vat = 15;
            printf("%d\n", vat);
            t += vat;
        }
        else if(weight[i] <= 65){
            printf("Healthy\t");
            vat = 12;
            printf("%d\n", vat);
            h += vat;
        }
        else {
            printf("Fat\t");
            vat = weight[i] * 5;
            printf("%d\n", vat);
            f += vat;
        }
        sum += vat;
    }

    printf("---------------------------\n");

    printf("Thin\t%d\n", t);
    printf("Healthy\t%d\n", h);
    printf("Fat\t%d\n", f);
    printf("SUM\t%d\n", sum);



}
