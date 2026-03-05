//Írjunk egy programot, ami interaktív módon bekéri egy gyémánt magasságát (egész szám).

//Először ellenőrizzük le, hogy helyes-e a bemenet. Csak pozitív páratlan számot fogadjunk el, ellenkező esetben írjunk ki egy hibaüzenetet és a program álljon le. 
/*Magasság: 3; 7

 *
***
 *
  
 
   *
  ***
 *****
*******
 *****
  ***
   *
 
*/

#include <stdio.h>

int main(){
    int magas;
    printf("Adja meg a gyemant magassagat: ");
    scanf("%d", &magas);

    //ez a felso resze + a kozepso sor

    if(magas <= 0 || magas % 2 ==0){ //ha paros vagy nulla akkor ez lesz
        printf(" a szam csakis paratlan egesz lehet, 0.naal nagyobb");
        return 1;
    }
    int mid = magas/2+1; // a gyemant felenek a keplete, leghoszabb sor
    for(int i = 1; i <= mid; i++){
        for(int j = 0; j < mid -i; j++){
            printf(" "); // a lefele tarto szokozok
        }
        for(int j = 1; j <= 2*i-1; j++){ //ahany csillagot kiir majd
            printf("*");
        }
        printf("\n");
    }
  // also resz allert !!

    for(int i = mid-1; i >= 1; i--){
        for(int j = 1; j <= mid-i; j++){
            printf(" "); //a szokozok again csak most felfele
        }
        for(int j = 1; j <= 2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}