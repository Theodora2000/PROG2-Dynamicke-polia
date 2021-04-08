#include <stdio.h>
#include <string.h>
#include <memory.h>
#include <stdlib.h>

int fun(int pole[]){

    int size = 0;
    int cislo=0;
    pole = (int*)malloc(sizeof(int));
    int i=0;
    while(1>0){
        scanf("%d", &cislo);
        if(cislo==0){

            break;
        }
        pole[i]=cislo;
        i++;
        size=i;
        pole = realloc(pole, sizeof(int));
    }



    for(int i=0;i<size;i++){
        printf("%d ", pole[i]);
    }

    return pole;


}

int main() {
   int pole[]={0};
    int size = sizeof(pole)/sizeof(pole[0]);
   /*printf("%d\n", size);
   for(int i=0;i<size;i++){
       printf("%d ", pole[i]);
   }*/

   fun(pole);
    return 0;
}
