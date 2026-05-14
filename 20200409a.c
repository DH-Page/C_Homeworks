/*Írj programot, amely a standard kimenetre írja a parancssori argumentumai közül a legrövidebbeket, soronként egyet-egyet. A szavakat ugyanabban a sorrendben írassuk ki, ahogyan a parancssori argumentumok között szerepeltek! */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char* argv[]){
    
    if(argc == 1){
        printf("Nem adtál meg egyetlen szót sem!\n");
        return 0;
    }
    int minlen = strlen(argv[1]);

    for(int i = 2; i < argc; i++){
        if(strlen(argv[i])< minlen){
            minlen = strlen(argv[i]);
        }
    }
    for(int i = 1; i < argc; i++){
        if(strlen(argv[i]) == minlen){
            printf("%s\n", argv[i]);
        }
    }
    return 0;
}