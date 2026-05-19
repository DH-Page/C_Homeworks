#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*a valos_szamok.txt elemeinek az osszeget irja ki 20 tizedesjegy pontossaggal*/
int main(){
    FILE *f = fopen("valos_szamok.txt", "r");
    if(f == NULL){
        printf("hiba!");
        return 1;
    }

    double osszeg = 0.0;
    char *sor = NULL;
    size_t len = 0;

    while(getline(&sor, &len, f) != -1){
        sor[strcspn(sor,"\n")] = '\0';
        for(int i = 0; sor[i] != '\0'; i++){
            if(sor[i] == ','){
                sor[i] = '.';
            }
        }
        osszeg += atof(sor);
    }
    printf("%.20lf\n", osszeg);
    free(sor);
    fclose(f);
    return 0;
}