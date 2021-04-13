#include <stdio.h>
#include <string.h>
#include <memory.h>
#include <stdlib.h>

int fun(int pole[]){

    int cislo=0;

    int i=0;
    while(1>0){


        scanf("%d", &cislo);
        if (cislo==0){
            break;
        }
        pole[i]=cislo;
        printf("%d", pole[i]);
        i++;
        pole = (int*)realloc(pole, sizeof(int));
    }


    return 0;


}

int main() {
    int *arr;
    arr = (int*)malloc(sizeof(int));
   /*printf("%d\n", size);
   for(int i=0;i<size;i++){
       printf("%d ", pole[i]);
   }*/

   fun(arr);


    return 0;
}
