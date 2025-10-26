#include <stdio.h>
int main (){

    int weigth;
    int hight;

    printf("Input your weigth : ");
    scanf("%d",&weigth);
    printf("Input your hight : ");
    scanf("%d",&hight);

    if ((hight - weigth) < 100){
        printf("You are FATTTTTT!!!!!");
    }

    return 0;
}
