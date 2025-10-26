#include<stdio.h>
#include<math.h>

int Input(char* txt, int* n){
    printf("%s\t\t", txt);
    scanf("%d", n);
    return* n;
}

main(){

    int n = Input("N", &n);
    int score[n] = {};

    int sum = 0;
    printf("score\t\t");
    for(int i = 0; i < n; i++){
        scanf("%d", &score[i]);
        sum += score[i];
    }

    float avg = (float)sum / n;
    printf("mean\t\t%.3f\n", avg);

    float scoreDiv[n] = {};
    for(int i = 0; i < n; i++){
        scoreDiv[i] = score[i] - avg;
    }

    printf("scoreDiv\t");
    for(int i = 0; i < n; i++){
        printf("%.3f\t", scoreDiv[i]);
    }
    printf("\n");

    float scoreDiv2[n] = {};
    for(int i = 0; i < n; i++){
        scoreDiv2[i] += scoreDiv[i] * scoreDiv[i];
    }

    printf("scoreDiv2\t");
    for(int i = 0; i < n; i++){
        printf("%.3f\t", scoreDiv2[i]);
    }
    printf("\n");

    float sumscoreDiv2 = 0;
    for(int i = 0; i < n; i++){
        sumscoreDiv2 += scoreDiv2[i];
    }

    printf("sumscoreDiv2\t%.3f\n", sumscoreDiv2);

    float varian = sumscoreDiv2 / (n - 1);
    printf("varian\t\t%.3f\n", varian);

    float SD = sqrt(varian);
    printf("SD\t\t%.2f\n", SD);

    int m = 5;
    char grade[m] = {};
    int a = 0, b = 0, c = 0, d = 0, f = 0;
    for(int i = 0; i < n; i++){
        if(score[i] >= 80) grade[i] = 'A', a++;
        else if(score[i] >= 70) grade[i] = 'B', b++;
        else if(score[i] >= 60) grade[i] = 'C', c++;
        else if(score[i] >= 50) grade[i] = 'D', d++;
        else grade[i] = 'F', f++;
    }

    printf("\nscore\t\t");
    for(int i = 0; i < n; i++){
        printf("%d\t", score[i]);
    }
    printf("\n");

    printf("grade\t\t");
    for(int i = 0; i < n; i++){
        printf("%c\t", grade[i]);
    }
    printf("\n");

    int data[m] = {a, b, c, d, f};
    int max = data[0];
    for(int i = 0; i < m; i++){
        if(data[i] > max) max = data[i];
    }

    printf("\n");
    for(int i = max; i >= 0; i--){
        printf("\t\t");
        for(int j = 0; j < m; j++){
            //printf("%d,%d\t", data[j], i);
            if(i < data[j]){
                printf("*\t");
            }else if(data[j] == i){
                printf("%d\t", data[j]);
            }else{
                printf("\t");
            }
        }
        printf("\n");
    }

    printf("\t\tA\tB\tC\tD\tF\n");

}
