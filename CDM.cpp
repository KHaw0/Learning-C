#include<stdio.h>
main(){

    int n;

    scanf("%d", &n);

    int m;
    int i = 1;
    int m100, m500, m1000;
    int r;

    while(i <= n){
        scanf("%d", &m);

        m1000 = m / 1000;
        r = m % 1000;
        m500 = r / 500;
        r = m % 500;
        m100 = r / 100;

        printf("Out=%d\n", m100 + m500 + m1000);
        i = i + 1;

    }
}
