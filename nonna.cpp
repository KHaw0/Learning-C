#include <stdio.h>
int main(){

    int taema;
    int taemamam;
    int tab;
    int taemb;
    int taembmam;
    int tbb;
    int taemc;
    int taemcmam;
    int tcb;
    int bonus;

    printf("enter bonus ");
    scanf("%d", &bonus);

    printf("enter taemamam ");
    scanf("%d", &taemamam);
    taema = bonus * 0.25;
    tab = taema / taemamam;
    printf("taema = %d\n",taema);
    printf("taemamam = %d\n",tab);

    printf("enter taembmam ");
    scanf("%d", &taembmam);
    taemb = bonus * 0.41;
    tbb = taemb / taembmam;
    printf("taemb = %d\n",taemb);
    printf("taembmam = %d\n",tbb);

    printf("enter taemcmam ");
    scanf("%d", &taemcmam);
    taemc = bonus * 0.34;
    tcb = taemc / taemcmam;
    printf("taemc = %d\n",taemc);
    printf("taemcmam = %d",tcb);


    return 0;
}
