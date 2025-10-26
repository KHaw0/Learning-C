#include<stdio.h>
int main(){

    float ud, kk, mk, overall, avg;

    printf("UD: ");
    scanf("%f",&ud);
    printf("KK: ");
    scanf("%f",&kk);
    printf("MK: ");
    scanf("%f",&mk);

    overall = ud + kk + mk;
    printf("Overall PROFIT = %.2f  BTH.\n",overall);
    avg = overall / 3;
    printf("Average profit = %.2f BTH.\n",avg);
    printf("==============================\n");

    if (ud >= kk && ud >= mk) {
        printf("MAX profit => UD %.2f\n",ud);

    }
    if (kk >= ud && kk >= mk) {
        printf("MAX profit => KK %.2f\n",kk);

    }
    if (mk >= kk && mk >= ud) {
        printf("MAX profit => MK %.2f\n",mk);

    }
    printf("==============================\n");
    if (ud <= kk && ud <= mk) {
        printf("MIN profit => UD %.2f\n",ud);

    }
    if (kk <= ud && kk <= mk) {
        printf("MIN profit => KK %.2f\n",kk);

    }
    if (mk <= kk && mk <= ud) {
        printf("MIN profit => MK %.2f\n",mk);

    }
    printf("==============================\n");






}


