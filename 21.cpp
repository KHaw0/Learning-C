#include <stdio.h>
int main(){

    int width;
    int length;
    int longwall;
    int areawall;

    scanf("%d", &width);
    scanf("%d", &length);

    longwall = width + width + length + length - 3;

    areawall = width * (length - 3) * 2.5;

    printf("longwall = %d\n",longwall);
    printf("areawall = %d",areawall);

    return 0;
}
