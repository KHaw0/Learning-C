#include<stdio.h>
int main(){
    int n, x;
    int sum = 1;
    scanf("%d",&x);
    scanf("%d",&n);
    for (int i = n; i > 0; i--){
        sum *= x;
    }
    printf("%d",sum);
}
