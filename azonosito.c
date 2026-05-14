/*Írjunk egy programot, ami '*' végjelig sztringeket olvas, s minden sztringről eldönti, hogy azonosító-e vagy sem.

Az azonosító tesztelését egy függvénnyel végezzük el! A függvény deklarációja így nézzen ki:

int is_valid_c_identifier(const char* input);

A kimenetben a YES egy igaz értéket, a NO egy hamis értéket jelöl (aszerint, hogy a sztring szabályos C azonosító-e vagy sem).*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*A C nyelvben egy azonosítóra a következők teljesülnek: csak alfanumerikus karakterek (a-z, A-Z, 0-9) szerepelnek benne, ill. az aláhúzás jel ('_')
betűvel (a-z, A-Z) vagy aláhúzás jellel ('_') kezdődik [azaz nem szerepelhet számjegy az elején]
legalább egy karakter hossz*/
int is_valid_c_identifier(const char* input){
    if( input == NULL || strlen(input) == 0){
        
        return 0;
    }

    if(!((input[0] >= 'a' && input[0] <= 'z') || (input[0] >= 'A' && input[0] <= 'Z') || input[0] == '_')){
            
            return 0; 
    }
    
    for(int i = 1; i < strlen(input); i++){
        if(!((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= '0' && input[i] <= '9') || input[i] == '_')){
            
            return 0; 
        }
        
    }
    return 1;
}

int main(){
    char string[100];
    printf("input (* végjelig): ");

    while(1){
        scanf("%s", string);
        if(strcmp(string, "*") == 0){
            break;
        }
        if(is_valid_c_identifier(string)){
            printf("YES\n\n");
        }
        else{
            printf("NO\n\n");
        }
    }
    return 0;
}