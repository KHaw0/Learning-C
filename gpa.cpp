#include <stdio.h>
int main(){

    int score;
    printf("Enter your score : ");
    scanf("%d", &score);
    if(score >= 80){
        printf("A");
    }
    else if(score >= 70 && score <80){
        printf("B");
    }
    else if(score >= 60 && score <70){
        printf("C");
    }
    else if(score >= 50 && score <60){
        printf("D");
    }
    else if(score < 50 && score >=0){
        printf("F");
    }
    else {
        printf("ingo");
    }
}

