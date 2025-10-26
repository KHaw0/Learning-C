#include<stdio.h>
int main(){
    char sex;
    float pay,weight;

    scanf(" %c",&sex);
    scanf("%f",&weight);

    if (weight > 0){
        if (sex == 'M' || sex == 'm'){
            if (weight > 80){
                pay = weight * 1.50;
                printf("Customer is MALE: %.2f KG\tPAY %.2f THB.", weight, pay);
            }else if (weight >= 50 && weight <= 80){
                pay = weight * 1.15;
                printf("Customer is MALE: %.2f KG.\tPAY %.2f THB.", weight, pay);
            }else if (weight < 50){
                pay = weight * 0.75;
                printf("Customer is MALE: %.2f KG.\tPAY %.2f THB.", weight, pay);
            }else printf("\"ERROR\"");
        }else if (sex == 'F' || sex == 'f'){
            if (weight > 60){
                pay = weight * 1.20;
                printf("Customer is FEMALE: %.2f KG.\tPAY %.2f THB.", weight, pay);
            }else if (weight >= 45 && weight <= 60){
                pay = weight * 0.95;
                printf("Customer is FEMALE: %.2f KG.\tPAY %.2f THB.", weight, pay);
            }else if (weight < 45){
                pay = weight * 0.55;
                printf("Customer is FEMALE: %.2f KG.\tPAY %.2f THB.", weight, pay);
            }else printf("\"ERROR\"");
        }else printf("\"ERROR\"");
    }else printf("\"ERROR\"");
}
