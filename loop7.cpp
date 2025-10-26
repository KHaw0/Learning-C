#include <stdio.h>
int main (){

    int Id;
    char *Name;
    int Mid, Final;
    char Grade;
    int sum = 0;
    int Total;
    int average;
    int n = 0;

    do{
        printf("Input ID: ");
        scanf("%d", &Id);
        printf("Input name: ");
        scanf("%s", Name);
        printf("Input MID: ");
        scanf("%d", &Mid);
        printf("Input FINAL: ");
        scanf("%d", &Final);

        n++;

        Total = Mid + Final;

        if (Total < 50){
            Grade = 'U';
        }else if (Total > 50){
            Grade = 'S';
        }
        sum += Total;

        printf("ID : %d\n", Id);
        printf("NAME : %s\n", Name);
        printf("MID : %d\n", Mid);
        printf("FINAL : %d\n", Final);
        printf("TOTAL : %d\n", Total);

    }while(Total != 50);

    average = sum / n;

    printf("average : %d\n", average);
}
