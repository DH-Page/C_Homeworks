/*Egy függvény mindig egyetlen értéket ad vissza. Mutatók segítségével azonban megoldható, hogy egy függvény (ami inkább eljárás lesz) akár több értéket is "visszaadjon".
Írjunk egy programot, ami random számokkal feltölt egy 10-elemű tömböt. A random számok a [10, 99] zárt intervallumból kerüljenek ki. Írassuk ki a tömb elemeit egymás mellé.
Írjunk egy "függvényt", aminek átadjuk a tömböt, s a fv. adja vissza 1) a tömb legkisebb elemét, 2) a tömb legnagyobb elemét, ill. 3) a tömb elemeinek az átlagát.
Ezt a három értéket is írassuk ki a képernyőre.
Példa:
A tömb elemei: 13, 57, 23, 71, 11, 68, 88, 59, 10, 32
Legkisebb elem: 10
Legnagyobb elem: 88
Az elemek átlaga: 43.2
 oldjuk meg ezt a feladatot mutatókkal. 

*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MERET 10
void stat(const int t[], int* min, int* max, double* avg){
    *min = t[0];
    *max = t[0];
    int ossz = 0;
    for(int i = 0; i < MERET; i++){
        if(t[i] < *min){
            *min = t[i];
        }
        else if(t[i] > *max){
            *max = t[i];
        }
        ossz += t[i];
    }
    *avg = (double)ossz / MERET;
    return;
}

int main(){
    srand(time(NULL));
    int tomb[MERET];
    for(int i = 0; i < MERET; i++){
        tomb[i] = rand() % 90 + 10;
    }
    printf("A tömb elemei: ");
    for(int i = 0; i < MERET; i++){
        printf("%d", tomb[i]);
        if(i < MERET - 1){
            printf(",");
        }
    }
    printf("\n");
    int max, min;
    double atlag;
    stat(tomb, &min, &max, &atlag);
    printf("Legkisebb elem: %d\n",min);
    printf("Legnagyobb elem: %d\n",max);
    printf("Az elemek átlaga: %.1f\n",atlag);
    return 0;
}