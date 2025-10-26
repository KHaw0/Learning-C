#include<stdio.h>

void getRound(int *n);
void Input(int *grade, int *credit, int n);
void getGpa(int *grade, int *credit, int *gpa, int n);
int getAllcredit(int *credit, int n);
int getAllgrade(int *gpa, int n);
double getGpax(int allgrade, int allcredit);
void Table(int *grade, int *credit, int *gpa, int n, int allcredit, int allgrade, double gpax);

int main(){
    int n, allcredit = 0, allgrade = 0;

    getRound(&n);

    int gpa[n], credit[n], grade[n];

    Input(grade, credit, n);
    getGpa(grade, credit, gpa, n);

    allcredit = getAllcredit(credit, n);
    allgrade = getAllgrade(gpa, n);

    double gpax = getGpax(allgrade, allcredit);

    Table(grade, credit, gpa, n, allcredit, allgrade, gpax);
}

void getRound(int *n){
    printf("Input N: ");
    scanf("%d", n);
}

void Input(int *grade, int *credit, int n){
    for (int i = 0; i < n; i++){
        printf("Input GRADE: ");
        scanf("%d", &grade[i]);

        printf("Input CREDIT: ");
        scanf("%d", &credit[i]);
    }
}

void getGpa(int *grade, int *credit, int *gpa, int n){
    for (int i = 0; i < n; i++){
        gpa[i] = grade[i] * credit[i];
    }
}

int getAllcredit(int *credit, int n){
    int total = 0;
    for (int i = 0; i < n; i++){
        total += credit[i];
    }
    return total;
}

int getAllgrade(int *gpa, int n){
    int total = 0;
    for (int i = 0; i < n; i++){
        total += gpa[i];
    }
    return total;
}

double getGpax(int allgrade, int allcredit){
    return (double)allgrade / allcredit;
}

void Table(int *grade, int *credit, int *gpa, int n, int allcredit, int allgrade, double gpax){
    printf("N=%d\n", n);
    printf("GRADE \tCREDIT \tG*P\n");
    for (int i = 0; i < n; i++){
        printf("%d \t%d \t%d\n", grade[i], credit[i], gpa[i]);
    }
    printf("\n\t%d \t%d\n", allcredit, allgrade);
    printf("\t\tGPAX %d / %d \t%.7f\n", allgrade, allcredit, gpax);
}
