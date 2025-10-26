#include<stdio.h>
int main (){

    int distance, speed, allday, day, month, year;

    printf("distance: ");
    scanf("%d",&distance);
    printf("speed: ");
    scanf("%d",&speed);

    allday = (distance - (distance % speed)) / speed;
    day = allday % 30;
    month = ((allday - day) / 30) % 12;
    year = (((allday - day) / 30) - month) / 12;

    printf("All %d days\n", allday);
    printf("YEAR\t:MONTH\t:DAY\n");
    printf("%d\t:%d\t:%d", year, month, day);

}
