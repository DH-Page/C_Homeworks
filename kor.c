#include<stdio.h>
#include<math.h>
#define _USE_MATH_DEFINES 
#define M_PI 3.14159265358979323846
int main(){
    double r;

    printf("adja meg a kör sugarát(valós érték)= \n");
    if(scanf("%lf", &r)!=1){
        printf("hibás érték!\n");
        return 1;
    }

    double kerulet = 2*r*M_PI;
    double terulet = pow(r,2)*M_PI;

    printf("A kör kerülete: %.2f\n", kerulet);
    printf("A kör területe: %.2f\n", terulet);

    return 0;
}