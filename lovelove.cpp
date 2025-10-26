#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define RED "\033[1;31m"
#define RESET "\033[0m"

#define ROWS 10
#define COLS 15

int main() {
    int heart[ROWS][COLS] = {
        {0,0,0,1,1,0,0,0,0,0,1,1,0,0,0},
        {0,0,1,1,1,1,0,0,0,1,1,1,1,0,0},
        {0,1,1,1,1,1,1,0,1,1,1,1,1,1,0},
        {0,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
        {0,0,1,1,1,1,1,1,1,1,1,1,1,0,0},
        {0,0,0,1,1,1,1,1,1,1,1,1,0,0,0},
        {0,0,0,0,1,1,1,1,1,1,1,0,0,0,0},
        {0,0,0,0,0,1,1,1,1,1,0,0,0,0,0},
        {0,0,0,0,0,0,1,1,1,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,1,0,0,0,0,0,0,0}
    };

    srand(time(NULL));

    int total_stars = 0;
    for(int i=0;i<ROWS;i++)
        for(int j=0;j<COLS;j++)
            if(heart[i][j] == 1) total_stars++;

    int drawn[ROWS][COLS];

    while(1) {
        for(int i=0;i<ROWS;i++)
            for(int j=0;j<COLS;j++)
                drawn[i][j] = 0;

        int drawn_stars = 0;
        while(drawn_stars < total_stars) {
            int r = rand()%ROWS;
            int c = rand()%COLS;
            if(heart[r][c]==1 && drawn[r][c]==0) {
                drawn[r][c]=1;
                drawn_stars++;


                system("cls");
                for(int i=0;i<ROWS;i++){
                    for(int j=0;j<COLS;j++){
                        if(drawn[i][j]) printf("%s*%s", RED, RESET);
                        else printf(" ");
                    }
                    printf("\n");
                }
                printf("\n My heart is complete for you \n");
                fflush(stdout);
                usleep(30000);
            }
        }

        int remaining = drawn_stars;
        while(remaining > 0) {
            int r = rand()%ROWS;
            int c = rand()%COLS;
            if(drawn[r][c]==1) {
                drawn[r][c]=0;
                remaining--;

                system("cls");
                for(int i=0;i<ROWS;i++){
                    for(int j=0;j<COLS;j++){
                        if(drawn[i][j]) printf("%s*%s", RED, RESET);
                        else printf(" ");
                    }
                    printf("\n");
                }
                printf("\n My heart is fading \n");
                fflush(stdout);
                usleep(30000);
            }
        }

    }


}
