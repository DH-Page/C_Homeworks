// viszaadja a tömb lehkisebb és legnagyobb elemlét.
#include <stdio.h>
int min_max(int t[], int size, int *min, int *max){
   *min = t[0];
   *max = t[0];
    for(int i = 0; i <size; i++){
        if(t[i] < *min){
            *min = t[i];
        }
        if(t[i] > *max){
            *max = t[i];
        }
    }
    return 0;
}

int main(){
    int t[8] = {0,2,13,4,8,5,22,1,};
    int size = 8;
    int min, max;

    int eedmeny = min_max(t, size, &min, &max);
    printf("a legkisebb elem: %d\n", min);
    printf("a legnagyobb elem: %d\n", max);

    return 0;
}

// mutatoval tudtam megoldani hogy ne memoriaszemetet adjon eredmenykent (a kis * a min es max elot)