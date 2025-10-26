#include<stdio.h>
int main(){

    float income_year, bonus, income_week, income_month;
    char name[50];

    printf("name: ");
    scanf("%s",&name);
    printf("income week: ");
    scanf("%f",&income_week);

    income_month = income_week * 4;
    income_year = income_month * 12;

    if (10.25/100 * income_month <= 30000) bonus = (1.75/100) * income_year;
    else bonus = (0.75/100) * income_year;

    printf("%s\n",name);
    printf("Income year = %.0f\n",income_year);
    printf("BONUS = %.2f",bonus);
}
