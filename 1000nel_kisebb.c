// 1000nle kisebb poz egesz szamok, 3nak vagy 5nek a tobbszorosei

#include <stdio.h>
int main(){
    int a = 0;
    for(a = 1; a < 1000; a++){
        if(a%5 == 0 || a%3 == 0){
            printf("%d\n",a);
        }
    } 
    return 0;
}