#include<stdio.h>
main(){

    int N;

    printf("N : ");
    scanf("%d", &N);

    int n = 0, m = 0, f = 0;
    int cost;
    int all_cost = 0;
    int i = 1;
    int dis;

    while(i <= N){
        printf("Distance : ");
        scanf("%d", &dis);
        if(dis <= 2){
            cost = 5;
            n = n + 1;
        }else if(dis <= 5){
            cost = 10;
            m = m + 1;
        }else{
            cost = 15;
            f = f + 1;
        }
        all_cost = all_cost + cost;
        i = i + 1;
    }
    printf("near = %d\n", n);
    printf("middle = %d\n", m);
    printf("far = %d\n", f);
    printf("All cost = %d\n", all_cost);

}
