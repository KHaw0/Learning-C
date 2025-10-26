#include<stdio.h>
int main ()
{
    float weight;
    int money,S,M,L;
    printf("IN PUT WEIGHT : ");
    scanf("%f",&weight);

    S=0;
    M=0;
    L=0;

    while(weight>=0 &&weight<=15)
    {

            if(weight<2)
            {
                S=S+1;
				printf("group : S\n");
            }
            else if(weight>=2&&weight<=5)
                {
                    M=M+1;
                    printf("group : M\n");
                }
                else
                {
                    L=L+1;
                    printf("group : L\n");
                }
        printf("IN PUT WEIGHT : ");
        scanf("%f7",&weight);
    }
        money=(S*150)+(M*500)+(L*800);
        printf("group S: %d\n",S);
        printf("group M: %d\n",M);
        printf("group L: %d\n",L);
        printf("Total money : %d\n",money);


    return 0;
}
