//Írjunk egy programot, ami bekér egy magasságot, majd kirajzol két derékszögű háromszöget egymás mellé az alább látható módon. (A két háromszög között 2 db szóköz legyen). 

#include<stdio.h>

int main(){
    int height;
    printf("Adja meg a max magassagot: ");
    scanf("%d", &height);
     
   for(int i = 1; i <= height; i++){  //jelenlegi sor 
        for(int j= 0; j < height - i; j++){
            printf(" "); //szokozok a haromszoghoz vagy mi
        }

        for(int j = 0; j < i; j++){
            printf("#"); //balpldali triangée
        }
        printf("  "); //kozepso szokozok

        for (int j = 0; j < i; j++){
            printf("#"); //jobb oldali triangle
         }  
         printf("\n"); //uj sor kezdete
        }
        return 0;
}

    
    
    
    
    
    
    
    
    
    
    
    
    
    //nothin' to see here
    
    /*for(int i = 0; i <= height; i++){

        for(int j =  0; j < height - i; j++){
            printf(" ");
        }
        for(int j = 0; j < i; j++){
            printf("#");
        }
        printf(" ");
        printf("\n");
    }*/
   
    
