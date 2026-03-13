// irjunk függvényt ami megmondja hogy egy tömb rendezett-e. Üres tömböt tekintsük rendezettnek. 
// A főprogramban (a main() fv.-ben) hívjuk meg a fv.-t, demonstráljuk annak használatát.

#include <stdio.h>
int is_rend(int t[], int size){
    for(int i = 0; i < size-1; i++){
        if(t[i] > t[i+1]) {
            return 0;  //nem rendezettt
        }
    }
    return 1;  // rendezett a tömb
}

int main(){
    int t[10] = {1,3,6,8,12,24,27,32,33,41}; // egy rendezett pelda (novekvo)
    /*int t[10] = {9,2,11,3,99,1,6,9,3,5};  ez nem rendezett
    int t[10] = {};
    */
    int size = 10; 

    if(is_rend(t,size)){
        printf("a megadott tomb rendezett\n");
    }
    else{
        printf("a megadott tomb nem rendezett\n");
    }
    return 0;
}