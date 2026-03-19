// bemenet egy szringeket tartalmazo tömb, hány olyan sztring van, amelyik legalább 2 hosszu és az elso karakter = utolso karakterrel.

#include <stdio.h>
#include <string.h>
#include"prog1.h"

int match_ends(int n ,string words[]){
    int count = 0;
    for(int i = 0; i < n ; i++){
        int len = strlen(words[i]);
        if (len >= 2 && words[i][0] == words[i][len - 1]){
            puts(words[i]);
            count++;
        }
    }
    return count;
}

int main(){
    string szok[] = {"peti", "vitya", "momonga", "kirk"};
    int size = 4;
    int eredmeny = match_ends(size, szok);
    printf("a %d szring felel meg a felteteleknek:\n", eredmeny);
    for(int j = 0; j < size; j++){
        puts(szok[j]);
    }
    
    return 0;

}