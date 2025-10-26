#include<stdio.h>
int main () {
    int n;
    printf("N: ");
    scanf("%d",&n);

    int weight[n]={};

    for (int i=0;i<n;i++){
            printf("Weight: ");
            scanf("%d",&weight[i]);
    }
    int t,h,f,thin,healthy,fat,sum;
    t=0,h=0,f=0,thin=0,healthy=0,fat=0;

    for (int i=0;i<n;i++){
            if(weight[i]>0&&weight[i]<46){
                printf("%d\t",weight[i]);
                printf("Thin\t15");
                t++;
                thin=t*15;
            }
            else if (weight[i]>45&&weight[i]<66){
                printf("%d\t",weight[i]);
                printf("Healthy\t12\n");
                h++;
                healthy=h*12;;
            }
            else {
                printf("%d\t",weight[i]);
                 f++;
                fat=weight[i]*5;
                printf("Fat\t%d\n",fat);
            }
    }
    sum=fat+healthy+thin;
    printf("Thin: %d bath\n",thin);
    printf("Healthy: %d bath\n",healthy);
    printf("Fat: %d bath\n",fat);
    printf("Sum: %d bath\n",sum);


return 0;
}
