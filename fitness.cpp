#include <stdio.h>
int main(){

    char sex;
    int weigth;
    int price;
    int servicecharge;

    printf("enter your sex : ");
    scanf("%c", &sex);

    printf("enter your weigth : ");
    scanf("%d", &weigth);

    printf("enter your price : ");
    scanf("%d", &price);

        if(weigth > 80 && sex == 'm'){
            servicecharge = price - ( price * 0.5 );
            printf("your sex is MALE\n");
            printf("your service charge = %d",servicecharge);

        }
        else if(weigth >=10 && weigth <=80 && sex == 'm'){
            servicecharge = price - ( price * 0.25 );
            printf("your sex is MALE\n");
            printf("your service charge = %d",servicecharge);
        }
        else if(weigth > 60 && sex == 'f'){
            servicecharge = price - ( price * 0.75 );
            printf("your sex is FEMALE\n");
            printf("your service charge = %d",servicecharge);
        }
        else if(weigth >= 10 && weigth <= 60 && sex == 'f'){
            servicecharge = price - ( price * 0.45 );
            printf("your sex is FEMALE\n");
            printf("your service charge = %d",servicecharge);
        }
        else {
            printf("You are not members");}



    return 0;
}
