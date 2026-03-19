// Az s alapsztringben keressük a c karakter utolsó előfordulásának a helyét.
// Visszatérési érték: a c utolsó előfordulásának az indexe az s-ben.
// Ha nincs benne: -1 a visszatérési érték.

#include<stdio.h>
#include<string.h>
#include"prog1.h"

int rfind_char(string s, char c){
    int last = -1;
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == c){
            last = i;
        }
    }
    return last;
}

int main(){
    string s = "szia vilag szovegsztring ide";
    rfind_char(s, 'z');
    rfind_char(s, 'b');
    rfind_char(s, 'g');

    printf("a karakterek elofordulasa: %d, %d, %d\n", rfind_char(s, 'z'), rfind_char(s, 'b'), rfind_char(s, 'g'));

    return 0;
}

