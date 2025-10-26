#include <stdio.h>

int main() {
    int n;
    int bin[32];   // เก็บเลขฐาน 2 (int 32 บิต)
    int i = 0;

    printf("Enter decimal number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Binary = 0\n");
        return 0;
    }

    // แปลงเป็นฐาน 2 (เก็บเศษไว้ใน array)
    while (n > 0) {
        bin[i] = n % 2;  // เก็บเศษ
        n /= 2;          // หารต่อไป
        i++;
    }

    // แสดงผลจากหลังมาหน้า
    printf("Binary = ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bin[j]);
    }
    printf("\n");

    return 0;
}
