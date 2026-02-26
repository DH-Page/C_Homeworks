// egész számok osszege 1 - 100 ig
#include<stdio.h>
#include<math.h>
int main(){
   int a, ossz = 0;
   for(a = 1; a <=100; a++){
    ossz = ossz+a;
    printf("1-100 ig a számok összege: %d\n", ossz);
   }
    return 0;
}