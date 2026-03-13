// irni kell egy eljarast ami megkap egy egeszeket tartalmazo tombot, ha negatív szamot talal akkor cserelje ki a szam pozitivjara(abs ertek).
// az eljaras a tombot helyben modositja. Main()ben a tomb eredeti és változottan is irodjon ki

#include <stdio.h>
#include <stdlib.h> // abs miatt kell megint

void absertek(int t[], int size){
    for(int i = 0; i < size; i++){
        if(t[i] < 0){
            t[i] = abs(t[i]); // a negativ elem abs erteke
        }//a pos nem valtozik
       
    }

}

int main(){
    int size;
    printf("mekkora legyen a tomnb: \n");
    scanf("%d", &size);

    int t[size]; //tomb feltoltese 0-val
    for(int j = 0; j < size; j++){
        printf("adj meg egy elemet: \n");
        scanf("%d",&t[j]); //feltoltom a tombomet szepen
    }
    printf("eredeti tomb: \n");
    for(int i = 0; i < size; i++){
        printf("%d, ", t[i]); //eredeti tomb kiirasa
    }
    absertek(t, size); // itt kell meghivni hogy a kiirt modositasok megtortenjenek
    printf("\nmodositott tomb: \n");
    for(int i = 0; i < size; i++){
        printf("%d, ", t[i]); //modositott tomb kiirasa
    }
   
    return 0;
}
