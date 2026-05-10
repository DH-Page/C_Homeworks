/*Írjunk egy programot, ami random számokkal feltölt egy 10-elemű tömböt. A random számok a [10, 99] zárt intervallumból kerüljenek ki. Írassuk ki a tömb elemeit egymás mellé.
Írjunk egy függvényt, aminek átadjuk a tömböt, s a fv. adja vissza 1) a tömb legkisebb elemét, 2) a tömb legnagyobb elemét, ill. 3) a tömb elemeinek az átlagát. */
/*A függvény most adjon vissza egy struktúrát, amibe becsomagoljuk a visszaadandó elemeket. */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MERET 10

typedef struct{
    int min;
    int max;
    double avg;
} stat_struct;

stat_struct stat(const int t[]){
    stat_struct s;
    s.min = t[0];
    s.max = t[0];
    int sum = 0;
    for(int i = 0; i < MERET; i++){
        if(t[i] < s.min){
            s.min = t[i];
        }
        else if(t[i] > s.max){
            s.max = t[i];
        }
        sum += t[i];
    }
    s.avg = (double)sum / MERET;
    return s;
}

int main(){
    srand(time(NULL));
    int t[MERET];
    for(int i = 0; i < MERET; i++){
        t[i] = rand() % 90 + 10;
        printf("%d", t[i]);
        if(i < MERET - 1){
            printf(",");
        }
    }
    printf("\n");
    stat_struct s = stat(t);
    printf("Legkisebb elem: %d\n",s.min);
    printf("Legnagyobb elem: %d\n",s.max); 
    printf("Az elemek átlaga: %.1f\n",s.avg);
    return 0;
}
