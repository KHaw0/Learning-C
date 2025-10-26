#include<stdio.h>
int main(){

    char manu;

    do{
        printf("[C]Circle\n[R]Rectangle\n[T]Triangle\n[X]Exit\nPlease select choice: ");

        scanf(" %c", &manu);

        if(manu == 'C') {
            printf("\"Circle\"\n");
            float r;
            printf("Input R: ");
            scanf("%f", &r);
            printf("%.3f\n", 3.141 * r * r);
            break;
        }
        else if(manu == 'R') {
            printf("\"Rectangle\"\n");
            float wide, length;
            printf("Input wide: ");
            scanf("%f", &wide);
            printf("Input length: ");
            scanf("%f", &length);

            printf("%.2f\n", wide * length);
            break;
        }
        else if(manu == 'T') {
            printf("\"Triangle\"\n");
            float base, hight;
            printf("Input base: ");
            scanf("%f", &base);
            printf("Input hight: ");
            scanf("%f", &hight);

            printf("%.2f\n", (float)1/2 * base * hight);
            break;
        }
        else if(manu == 'X') printf("\"Exit\"\n");
        else printf("\"No choice...\"\n");
    }while(manu != 'X');

}
