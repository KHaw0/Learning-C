#include<stdio.h>
int main(){

    float Width, Length, Heigth, Cost, Area, Pay;

    printf("Width: ");
    scanf("%f",&Width);
    printf("Length: ");
    scanf("%f",&Length);
    printf("Heigth: ");
    scanf("%f",&Heigth);
    printf("Cost: ");
    scanf("%f",&Cost);

    Area = Width * Heigth * 2 + Heigth * Length * 2;
    Pay = Area * Cost;

    printf("Area\t%.3f\n",Area);
    printf("Pay\t%.3f",Pay);


}
