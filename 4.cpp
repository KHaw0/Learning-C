#include<stdio.h>
int main(){

    float width, capacit_sph, capacit_waste, r;

    printf("Width: ");
    scanf("%f",&width);

    r = width / 2;
    capacit_sph = (float)4 / 3 * 3.141592653589793 * r * r * r;
    capacit_waste = width * width * width - capacit_sph;

    printf("capacit_sph = %.3f\n",capacit_sph);
    printf("capacit_waste = %.3f",capacit_waste);

}
