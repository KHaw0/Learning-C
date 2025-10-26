#include <stdio.h>
int main(){
    int score;

    printf("Enter your score : ");
    scanf("%d",&score);

    if (score >= 50){
        printf("You passed the exam");
    }
    else {
        printf("You failed the exam");
    }

}
