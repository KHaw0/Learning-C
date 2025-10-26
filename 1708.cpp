#include <stdio.h>

int main() {
    char name[50];
    float year, month, week, bonus;

    printf("name: ");
    scanf("%s",&name);
    printf("Income week: ");
    scanf("%f",&week);

    printf("%s\n",name);

    month = week * 4;
    year = month * 12;

    if (10.25/100 * month <= 30000) {
        bonus = 1.75/100 * year;
    }else {
        bonus = 0.75/100 * year;
    }

    printf("Income year = %d\n",(int)year);
    printf("BONUS = %.2f",bonus);


}
