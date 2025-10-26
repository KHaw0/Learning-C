#include <stdio.h>

int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    int num[n]; // เก็บข้อมูลใน array

    for(int i = 0; i < n; i++){
        printf("Enter numbers: ");
        scanf("%d", &num[i]);
    }

    printf("\n");
    for(int i = 0; i < n; i++){
        int isPrime = 1; // สมมติว่าเป็นจำนวนเฉพาะ
        if(num[i] < 2) isPrime = 0;
        else {
            for(int j = 2; j*j < num[i]; j++){
                if(num[i] % j == 0){
                    isPrime = 0;
                    break;
                }
            }
        }

        if(isPrime)
            printf("%d is Prime Number\n", num[i]);
        else
            printf("%d\n", num[i]);
    }

    return 0;
}
