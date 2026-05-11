/*Írjunk programot, ami egy adott intervallumon generál N db véletlen számot.
A feladat általánosítva lett, vagyis minden paramétert a felh.-tól kérünk be.
Itt a kimenetben még lehetnek azonos számok. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//A verzio
int main(){
    int n;
    int min, max;
    srand(time(NULL)); // véletlenszám generátor inicializálása

    printf("Hány db random számot kérsz? \n");
    scanf("%d", &n);

    printf("Alsó határ: \n");
    scanf("%d", &min);

    printf("Felső határ (zárt intervallum): \n");
    scanf("%d", &max);

    printf("A generált számok: ");
    for(int i = 0; i < n; i++){
        int random = rand() % (max - min + 1) + min;
        printf("%d", random);   
        if(i < n - 1){
            printf(", ");
        }
    }
    printf("\n");
    return 0;
}
//B verzio
int main(){
    int n; 
    int min, max;

    srand(time(NULL));

    printf("Hány db random számot kérsz? \n");
    scanf("%d", &n);

    printf("Alsó határ: \n");
    scanf("%d", &min);

    printf("Felső határ (zárt intervallum): \n");
    scanf("%d", &max);

    printf("A generált számok: ");
    //az elemek rendezve legyenek
    // buborek rend.
    int tomb[n];

    for(int i = 0; i < n; i++){
        tomb[i] = rand() % (max - min + 1) + min;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(tomb[j] > tomb[j + 1]){
                int temp = tomb[j];
                tomb[j] = tomb[j + 1];
                tomb[j + 1] = temp;
            }
        }
    }
    printf("A generált számok: ");
    for(int i = 0; i < n; i++){
        printf("%d", tomb[i]);
    }
    return 0;
}






