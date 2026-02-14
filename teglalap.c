#include <stdio.h>

int main(){
    int a;
    int b;

    printf("adja meg a téglalap a és b oldalát (egész szám): \n");
    scanf("%d %d", &a, &b);

    int terulet = a*b;
    int kerulet = 2*(a+b);

    printf("a tégalap kerülete = %d \n",kerulet);
    printf("a tégalap területe = %d \n",terulet);
    return 0;
}