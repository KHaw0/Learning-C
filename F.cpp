#include<stdio.h>
#include<math.h>
int main(){

    float Mass, Sigma, Lambda;

    printf("Sigma: ");
    scanf("%f",&Sigma);
    printf("Lambda: ");
    scanf("%f",&Lambda);

    Mass = Sigma / pow(Lambda * 0.01,2);

    printf("Sigma is %.2f, Lambda is %.2f\n", Sigma, Lambda);
    printf("Mass = %.2f\n",Mass);

    if (Mass > 25) printf("YOU ARE FAT.");
    else printf("YOU ARE SLENDER.");
}
