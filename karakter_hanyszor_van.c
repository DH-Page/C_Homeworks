// az adott sztringben a karakter hányszor fordul elő
#include <stdio.h>
#include <string.h>
#include"prog1.h"

int char_count(string s, char c){
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == c){
            count++;
        }
    }
    return count;
}

int main(){
    char c;
    string s = "mégegy random szoveges mondat van itt ki gondolná";
    printf("adj meg egy karaktert: ");
    scanf("%c", &c);
    char_count(s, c);
    printf("a karakter %d-szor fordul elő\n", char_count(s, c));

     return 0;

}