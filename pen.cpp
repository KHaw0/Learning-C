#include <stdio.h>
int main (){

    int pen;
    int jar;
    int bath;
    int pen_lift;

    scanf("%d", &pen);

    pen_lift = pen % 12;
    jar = (pen - pen_lift) / 12;
    bath = ( jar * 357 ) + ( pen_lift * 12 );

    printf("%d\n",jar);
    printf("%d\n",pen_lift);
    printf("%d",bath);

    return 0;
}
