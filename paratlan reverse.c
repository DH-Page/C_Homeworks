//Írjunk egy programot, amely beolvas egy pozitív egész számot (n), majd kiírja n-től 1-ig (zárt intervallum) visszafelé az összes páratlan számot!
#include <stdio.h>
int main(){
    printf("adjon meg egy egesz szamot: \n");
    int n; 
    scanf("%d",&n);
    for(int i = n; i >= 1; i--){
        if(i%2 == 1){
            printf("%d\n", i);
        }
    }
    return 0;
}