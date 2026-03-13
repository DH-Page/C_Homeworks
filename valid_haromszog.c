// a háromszög minden oldala legyen pozitiv, függvényen belül ellenőrizzük le. 
//Egy háromszöget akkor tudunk megszerkeszteni, ha bármely két oldalának a hossza nagyobb, mint a harmadik oldal hossza.
//A kimenet egy logikai igaz vagy hamis érték legyen aszerint, hogy a három oldalból megszerkeszthető-e egy háromszög vagy sem. 
#include<stdio.h>

int valid_triangle(int a, int b, int c){
    if(a <= 0 || b <= 0 || c <= 0){  //ha kisevv vag egyenlo 0-a akkor nemjo
        return 0;
    }

    if(a+b > c && a+c > b && b+c > a){ //ket tetsz oldal osszhossza nagyobbnak kell lennie mint a harmadik oldal hossza
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    printf("adja meg a haromszog oldalait: (a szamok pozitivak legyenek)\n");
    int a, b, c;
    scanf("%d %d %d",&a ,&b ,&c);
    int true = 1;
    int false = 0;
    if(valid_triangle(a, b, c)){
        printf("%d", true);
    }
    else{
        printf("%d", false);
    }
    return 0;
}