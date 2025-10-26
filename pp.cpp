#include <stdio.h>

int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    int num[n];
    printf("Enter %d numbers:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%d=", num[i]);
        int hasFactor = 0;
        for (int j = 2; j < num[i]; j++) {
            if (num[i] % j == 0) {
                if (hasFactor) printf(",");
                printf("%d", j);
                hasFactor = 1;
            }
        }
        printf("\n");
    }

    return 0;
}
