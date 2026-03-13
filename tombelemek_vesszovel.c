// irj eljarast ami kap egy tombot majd kiirja az elemeket egymas mellé, vesszovel elvalasztva, szokozzel.
// utolso elem utan csak sortores legyen pl: 4, 7, 34, 23, 67

#include <stdio.h>
int array(int t[], int size){
    for(int i = 0; i < size; i++){  // tomb elemein vegigmegy es kiirjuk
        if(i == size - 1){
            printf("%d\n", t[i]);  // utso elem kiirasa sortoressel
        }
        else{
            printf("%d, ", t[i]);  // a szam utan vesszo es szokoz kiirasa
        }
    }
    return 0;
}

int main(){
    int size;
    printf("adj meg egy tomb meretet: ");
    scanf("%d",&size);  //beolvassa a megadott meretet es annyiszor keri majd az elem megadast
    int t[size];
    for(int j = 0; j < size; j++){
        t[j] = 0;  //a tomb kezdetben felvan toltve 0-akkal majd ezeket irja felul
    }
    for(int j = 0; j < size; j++){
        printf("adja meg a tomb elemeit: "); // ezzel irjuk felul a 0-val feltoltott tombot
        scanf("%d", &t[j]); 
    }
    array(t, size); //itt hivjuk meg az eljarast ami kiirja a feladatnak megfelelve :)
    return 0;
}