// beolvasunk egy pozitív egész számot (n), majd kiírja 1 től nig a 4el osztható számokat
#include <stdio.h>
int main(){
    int n;
    printf("adjon meg egy pozitiv egesz szamot: \n");
    scanf("%d", &n);
    int a;
    for(a = 1; a <= n; a++){
        if(a%4 == 0){
            printf("%d\n",a);
        }
       
    }
     return 0;
}