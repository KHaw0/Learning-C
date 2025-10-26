#include<stdio.h>
int main(){

    int n;
    int allcredit = 0;
    int allgrade = 0;

    printf("Input N: ");
    scanf("%d", &n);

    int gpa[n];
    int credit[n];
    int grade[n];

    for (int i = 0; i < n; i++){
        printf("Input GRADE: ");
        scanf("%d", &grade[i]);

        printf("Input CREDIT: ");
        scanf("%d", &credit[i]);

        gpa[i] = grade[i] * credit[i];
        allcredit += credit[i];
        allgrade += gpa[i];

    }
    printf("N=%d\n", n);
    printf("GRADE \tCREDIT\n");
    for (int i = 0; i < n; i++){
        printf("%d \t%d \t%d\n", grade[i], credit[i], gpa[i]);
    }
    printf("\n\t%d \t%d\n", allcredit, allgrade);

    double gpax = (float)allgrade / allcredit;

    printf("\t\tGPAX %d / %d \t%.7f\n", allgrade, allcredit, gpax);



}
