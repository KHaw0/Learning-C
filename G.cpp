#include<stdio.h>
int main(){

    float Money, pay, discount, balance;

    printf("Money: ");
    scanf("%f",&Money);

    if (Money >= 3000000){
        printf("\"Cottage style\"\n");
        discount = 3000000 * (3.5/100);
        pay = 3000000 - discount;
        balance = Money - pay;

        printf("Discount %.2f THB.\n",discount);
        printf("Pay %.2f THB.\n",pay);
        printf("Balance %.2f THB.",balance);
    }else if (Money >= 2500000){
        printf("\"Contemporary style\"\n");
        discount = 2500000 * ((float)3/100);
        pay = 2500000 - discount;
        balance = Money - pay;

        printf("Discount %.2f THB.\n",discount);
        printf("Pay %.2f THB.\n",pay);
        printf("Balance %.2f THB.",balance);
    }else if (Money >= 1000000){
        printf("\"Modern style\"\n");
        discount = 1000000 * (2.5/100);
        pay = 1000000 - discount;
        balance = Money - pay;

        printf("Discount %.2f THB.\n",discount);
        printf("Pay %.2f THB.\n",pay);
        printf("Balance %.2f THB.",balance);
    }else printf("\"Money Not enough\"");


}
