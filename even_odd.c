#include <stdio.h>
int is_even(int n){
    if(n%2 == 0){
        return 1;
    }
    return 0;
}

/*int is_odd(int n){
    if(n%2 != 0){
        return 1;
    }
    return 0;
}*/

int main(){
    int num;
    int true = 1;
    int false = 0;
    printf("adj meg egy egész számot ide: \n");
    scanf("%d", &num);
    if(is_even(num)){     //itt ugyan ez csak az is_odd meghivasaval
        printf("%d", true);
    }
    else{
        printf("%d", false);
    }
    return 0;
}