#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int divi(int a, int b) {
    return b != 0 ? a / b : 0;
}

int mod(int a, int b) {
    return b != 0 ? a % b : 0;
}

int max(int a, int b) {
    return a > b ? a : b;
}

int min(int a, int b) {
    return a < b ? a : b;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_int(int x) {
    printf("%d\n", x);
}

void print_str(const char* s) {
    printf("%s\n", s);
}

int main() {
    int a = 12, b = 8, r;

    r = add(a, b);
    print_int(r);

    r = sub(a, b);
    print_int(r);

    r = mul(a, b);
    print_int(r);

    r = divi(a, b);
    print_int(r);

    r = mod(a, b);
    print_int(r);

    r = max(a, b);
    print_int(r);

    r = min(a, b);
    print_int(r);

    swap(&a, &b);
    print_int(a);
    print_int(b);

    print_str("done");

    return 0;
}
