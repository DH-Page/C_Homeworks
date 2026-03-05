//Írjon függvényt, ami vissza adja a fibonacci N.-k elemét, majd készítsen a main függvényben egy ciklust, ami kiírja az első 100 fibonacci számot a függvény segítségével.
/* a n-edik elem az Fn-1 + Fn-2
f0 = 0 es F1 = 1*/ 
#include<stdio.h>

int fib_bn(int n){
    if(n == 0){ //F0 elem legyen 0
        return 0;
    }
    if(n == 1){ // F1 elem legyen egy
        return 1;
    }
    return fib_bn(n - 1) + fib_bn(n - 2); //utanna ezzel kiszamitva a kovetkezo elemek
}
int main(){
    for(int i = 0; i < 100; i++){
        printf("az elsö 100 fibonacci szám: %d\n", fib_bn(i)); //kiirja a fibonacci szamokat a fib_bn fugvennyel
    }
    return 0;
}