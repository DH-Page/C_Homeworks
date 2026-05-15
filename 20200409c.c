/*Írjon programot, ami parancssori argumentumként megkapja egy szöveges fájl nevét. A program írja ki a képernyőre a fájl sorainak a számát.

Hiba esetén a hibaüzenet a standard hibakimeneten jelenjen meg, s a program egy hibakóddal lépjen ki! */

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char*argv[]){
    if(argc != 2){
        fprintf(stderr,"hiba: adja meg a szoveges allomany nevet!\n ");
        return 1;
    }
    FILE* file = fopen(argv[1], "r");
    if(file == NULL){
        fprintf(stderr,"Hiba! A %s nevű file-t nem sikerült megnyitni!\n", argv[1]);
        return 1;
    }
    int count = 0;
    int c;
    while((c = fgetc(file)) != EOF){ // EOF = end of file
        if(c == '\n'){
            count++;
        }
    }
    fclose(file);
    printf("%d\n", count);
    return 0;
}

/*$ ./a.out
Hiba! Adja meg egy szöveges állomány nevét!

$ ./a.out nesze.txt
Hiba! A nesze.txt nevű file-t nem sikerült megnyitni!

$ ./a.out input.txt
3

$ cat input.txt
elso sor
masodik sor
harmadik sor (utolso sor)*/