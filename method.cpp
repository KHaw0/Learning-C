#include <stdio.h>

void result1(){
    int i;
    int sum = 0;
    do{
        printf("Enter number : ");
        scanf("%d", &i);
        sum = sum + i;
    }while(i != 0);
        printf("result = %d",sum);
}
void result2(){
    int w,h;
    int n;
    int rarea=0;
    printf("Enter N : ");
    scanf("%d",&n);
    for (int i = 1;i <= n;i++){
        printf("Enter W : ");
        scanf("%d",&w);
        printf("Enter h : ");
        scanf("%d",&h);
        int area = w * h;
        rarea = rarea + area;
    }
    double avg = rarea / n;
    printf("%.2f",avg);
}
int result3(int total){
    int num;
    int result=0;
    for(int i=0;i<total;i++){
        printf("Enter Number : ");
        scanf("%d",&num);
        result = result + num;
    }
    return result;
}
int result3(int total,int result){
    int num;
    for(int i=0;i<total;i++){
        printf("Enter Number : ");
        scanf("%d",&num);
        result = result + num;
    }
    return result;
}

int process(){

}

void cow(){
    float age;
    int cow1=0,cow2=0,cow3=0;
    do{
        printf("Enter age cow : ");
        scanf("%f",&age);
        if (age > 0 && age < 0.5){
            cow1++;
            printf("cow1 = %d\n",cow1);
        }else if(age >= 0.5 && age <= 1.5){
            cow2++;
            printf("cow2 = %d\n",cow2);
        }else if(age > 1.5) {
            cow3++;
            printf("cow3 = %d\n",cow3);
        }
    }while (age != 0);
    int money = (cow1*15000) + (cow2 * 25000) + (cow3 * 31500);
    printf("cow1 = %d\n",cow1);
    printf("cow2 = %d\n",cow2);
    printf("cow3 = %d\n",cow3);
    printf("money = %d\n",money);

}
void line() {
 printf("\n=============================== \n");

int entermoney(int day){

    int money;
    int sum = 0;

    for (int i = 1;i <= day;i++){
        printf("Enter money : ");
        scanf("%d",&money);
        sum = sum + money;
    }
    return sum;

}

double rice(int day){
    int sum = entermoney(day);
    double rice = sum / 37.25;

    return rice;
}
}
int main(){
    int day=0;
    printf("Enter day : ");
    scanf("%d",&day);
    line();
    printf("%.2f KG",rice(day));
}
